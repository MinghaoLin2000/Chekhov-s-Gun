-[iAUPServer personalizationComplete]
bool __cdecl -[iAUPServer personalizationComplete](iAUPServer *self, SEL a2)
{
  __int64 v3; // x1
  bool v4; // w20
  __int64 v5; // x1
  unsigned __int8 currentAsset; // [xsp+Fh] [xbp-11h] BYREF

  if ( !self->_firmwareBundle )
  {
    NSLog(&CFSTR("[personalizationComplete] Invalid state: firmwareBundle = NULL").isa, a2);
    goto LABEL_12;
  }
  if ( self->_currentAsset != 1 )
  {
    NSLog(&CFSTR("[personalizationComplete] Invalid asset for processing personalization").isa, a2);
    goto LABEL_12;
  }
  if ( (unsigned int)-[iAUPServerDelegate getPersonalizationID](self->_delegate, "getPersonalizationID") >= 0x10 )
  {
    currentAsset = (unsigned __int8)-[iAUPServerDelegate getPersonalizationID](self->_delegate, "getPersonalizationID");
    NSLog(&CFSTR("[RequestDownload] Sending COMMAND_GetPersonalizationInfo").isa);
    v4 = 1;
    if ( !-[iAUPServer sendCommand:payload:payload_length:](
            self,
            "sendCommand:payload:payload_length:",
            66LL,
            &currentAsset,
            1LL) )
      return v4;
    NSLog(&CFSTR("[personalizationComplete] Failed to send next Personalization request").isa, v5);
LABEL_12:
    currentAsset = -1;
    -[iAUPServer sendCommand:payload:payload_length:](
      self,
      "sendCommand:payload:payload_length:",
      99LL,
      &currentAsset,
      1LL);
    return 0;
  }
  currentAsset = self->_currentAsset;
  if ( -[iAUPServer sendCommand:payload:payload_length:](
         self,
         "sendCommand:payload:payload_length:",
         97LL,
         &currentAsset,
         1LL) )
  {
    NSLog(&CFSTR("[personalizationComplete] Failed to send AckRequestDownload").isa, v3);
    goto LABEL_12;
  }
  -[iAUPServer setServerState:](self, "setServerState:", 6LL);
  return 1;
}