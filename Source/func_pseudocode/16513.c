-[iAUPServer processRequestDownloadCommand:length:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[iAUPServer processRequestDownloadCommand:length:](iAUPServer *self, SEL a2, char *a3, unsigned int a4)
{
  __int64 v4; // x21
  const char *v7; // x8
  __int64 serverState; // x22
  __int64 v9; // x25
  __int64 v10; // x26
  __int64 v11; // x24
  __int64 v12; // x27
  __int64 v13; // x23
  HSModel *v14; // x0
  __int64 v15; // x2
  const __CFString *v16; // x21
  __int64 v17; // x22
  __int64 v18; // [xsp+0h] [xbp-70h]
  unsigned __int8 v19; // [xsp+1Dh] [xbp-53h] BYREF
  _BYTE v20[2]; // [xsp+1Eh] [xbp-52h] BYREF

  v4 = *(_QWORD *)&a4;
  v7 = "valid";
  if ( !a3 )
    v7 = "nil";
  NSLog(&CFSTR("%s(): payload=%s length=%d \n").isa, a2, "-[iAUPServer processRequestDownloadCommand:length:]", v7, a4);
  if ( !(_DWORD)v4 )
  {
    NSLog(&CFSTR("[RequestDownload] Invalid payload length=%d\n").isa, 0LL);
    return;
  }
  if ( (unsigned __int8)*a3 >= 2u )
  {
    NSLog(&CFSTR("[RequestDownload] Unsupported asset type=%d\n").isa, (unsigned __int8)*a3);
    return;
  }
  if ( self->_serverState != 3 )
  {
    NSLog(
      &CFSTR("[RequestDownload] Invalid State=%s\n").isa,
      -[iAUPServer serverStateString:](self, "serverStateString:"));
    goto LABEL_27;
  }
  -[iAUPServer setServerState:](self, "setServerState:", 4LL);
  if ( *a3 != 1 )
  {
    if ( !*a3 )
    {
      if ( (unsigned int)v4 <= 5 )
      {
        NSLog(&CFSTR("[RequestDownload] Invalid HS Asset payload length=%d\n").isa, v4);
      }
      else
      {
        serverState = (unsigned int)self->_serverState;
        v9 = (unsigned __int8)a3[1];
        v10 = (unsigned __int8)a3[2];
        v11 = (unsigned __int8)a3[3];
        v12 = (unsigned __int8)a3[4];
        v13 = (unsigned __int8)a3[5];
        v14 = objc_alloc_init(&OBJC_CLASS___HSModel);
        self->_hsModel = v14;
        if ( v14 )
        {
          -[HSModel setDelegate:](v14, "setDelegate:", self);
          -[iAUPServer setServerState:](self, "setServerState:", 5LL);
          -[iAUPServer setCurrentAsset:](self, "setCurrentAsset:", 0LL);
          if ( -[HSModel getHSModelForEngineMajorVersion:minorVersion:numHSModels:modelBuffer:length:](
                 self->_hsModel,
                 "getHSModelForEngineMajorVersion:minorVersion:numHSModels:modelBuffer:length:",
                 v10 | (v9 << 8),
                 v12 | (v11 << 8),
                 v13,
                 a3 + 6,
                 (unsigned int)(v4 - 6)) )
          {
            return;
          }
          NSLog(&CFSTR("[RequestDownload] Failed to create HS Model instance\n").isa);
          -[iAUPServer setServerState:](self, "setServerState:", serverState);
        }
        else
        {
          NSLog(&CFSTR("[RequestDownload] Failed to create HS Model instance\n").isa, v18);
        }
      }
    }
    goto LABEL_27;
  }
  if ( (unsigned int)-[iAUPServer iAUPVersion](self, "iAUPVersion") <= 1 )
  {
    NSLog(&CFSTR("[RequestDownload] RequestDownload not supported in this protocol version").isa, v18);
    goto LABEL_27;
  }
  if ( -[iAUPServer iAUPVersion](self, "iAUPVersion") != 2 )
  {
LABEL_27:
    v16 = 0LL;
    v17 = 0LL;
    goto LABEL_28;
  }
  if ( (unsigned int)-[iAUPServerDelegate updateRequiresPersonalization](
                       self->_delegate,
                       "updateRequiresPersonalization") )
  {
    v19 = (unsigned __int8)-[iAUPServerDelegate getPersonalizationID](self->_delegate, "getPersonalizationID");
    NSLog(&CFSTR("[RequestDownload] Sending COMMAND_GetPersonalizationInfo").isa);
    if ( !-[iAUPServer sendCommand:payload:payload_length:](
            self,
            "sendCommand:payload:payload_length:",
            66LL,
            &v19,
            1LL) )
    {
      v15 = 7LL;
LABEL_19:
      -[iAUPServer setServerState:](self, "setServerState:", v15);
      -[iAUPServer setCurrentAsset:](self, "setCurrentAsset:", 1LL);
      return;
    }
    v16 = CFSTR("Failed to send Personalization Request");
    v17 = 4294967291LL;
  }
  else
  {
    v19 = 1;
    if ( !-[iAUPServer sendCommand:payload:payload_length:](
            self,
            "sendCommand:payload:payload_length:",
            97LL,
            &v19,
            1LL) )
    {
      v15 = 6LL;
      goto LABEL_19;
    }
    NSLog(&CFSTR("[RequestDownload] Failed to send AckRequestDownload").isa);
    v17 = 0LL;
    v16 = 0LL;
  }
LABEL_28:
  -[iAUPServer setCurrentAsset:](self, "setCurrentAsset:", 4LL);
  if ( *a3 == 1 )
  {
    v20[0] = -1;
    -[iAUPServer sendCommand:payload:payload_length:](self, "sendCommand:payload:payload_length:", 99LL, v20, 1LL);
    -[iAUPServerDelegate handleSessionError:message:](self->_delegate, "handleSessionError:message:", v17, v16);
  }
  else if ( !*a3 )
  {
    -[iAUPServer setServerState:](self, "setServerState:", 3LL);
    v20[0] = *a3;
    v20[1] = 0;
    -[iAUPServer sendCommand:payload:payload_length:](self, "sendCommand:payload:payload_length:", 97LL, v20, 2LL);
    objc_release(self->_hsModel);
    self->_hsModel = 0LL;
  }
}