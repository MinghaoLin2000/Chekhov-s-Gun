-[EAAccessoryUpdater findFirmwareWithOptions:remote:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[EAAccessoryUpdater findFirmwareWithOptions:remote:](EAAccessoryUpdater *self, SEL a2, id a3, bool a4)
{
  _BOOL8 v4; // x21
  void *v7; // x20
  unsigned int v8; // w22
  NSString *deviceClass; // x23
  __int64 v10; // x1
  FudPluginDelegate *v11; // x19
  NSError *v12; // x6
  FudPluginDelegate *delegate; // x0
  __int64 v14; // x2
  void *v15; // x3
  __int64 v16; // x4
  void *v17; // x21
  void *v18; // x22
  void *v19; // x25
  void *v20; // x26
  NSData *v21; // x27
  NSData *v22; // x0
  NSData *v23; // x23
  _BOOL8 v24; // x0
  unsigned int v25; // w8
  FudPluginDelegate *v26; // x0
  NSString *localFilePath; // x9
  NSString *v28; // x0
  EAFirmwareUpdater *firmwareUpdater; // x0
  NSData *v30; // x25
  NSDictionary *v31; // [xsp+30h] [xbp-A0h]
  void *v32; // [xsp+38h] [xbp-98h]
  _QWORD v33[6]; // [xsp+40h] [xbp-90h] BYREF
  char v34; // [xsp+70h] [xbp-60h]
  __int64 v35; // [xsp+78h] [xbp-58h] BYREF
  __int64 vars8; // [xsp+D8h] [xbp+8h]

  v4 = a4;
  -[FudPluginDelegate log:format:](
    self->delegate,
    "log:format:",
    5LL,
    CFSTR("Entering: %s:%d"),
    "-[EAAccessoryUpdater findFirmwareWithOptions:remote:]",
    839LL);
  v7 = +[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary");
  v8 = -[EAAccessoryUpdater consentRequired](self, "consentRequired");
  deviceClass = -[EAFirmwareUpdater name](self->firmwareUpdater, "name");
  if ( self->restartOnlyUI )
    objc_msgSend(
      v7,
      "setObject:forKey:",
      +[NSNumber numberWithBool:](&OBJC_CLASS___NSNumber, "numberWithBool:", 1LL),
      CFSTR("SilentUpdateNoUI"));
  if ( -[EAFirmwareUpdater accessory](self->firmwareUpdater, "accessory") )
  {
    if ( -[EAFirmwareUpdater isMultiAssetSession](self->firmwareUpdater, "isMultiAssetSession") )
    {
      -[FudPluginDelegate log:format:](
        self->delegate,
        "log:format:",
        3LL,
        CFSTR("%s: multi asset session - find NOP %@"),
        "-[EAAccessoryUpdater findFirmwareWithOptions:remote:]",
        self->deviceClass);
LABEL_11:
      delegate = self->delegate;
      v14 = 1LL;
      v15 = v7;
LABEL_12:
      v16 = 1LL;
LABEL_13:
      v12 = 0LL;
      goto LABEL_14;
    }
    if ( !a3 )
      goto LABEL_54;
    if ( objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("FirmwareBundle")) )
    {
      -[EAFirmwareUpdater setFirmwareBundle:](
        self->firmwareUpdater,
        "setFirmwareBundle:",
        objc_msgSend(a3, "objectForKeyedSubscript:", CFSTR("FirmwareBundle")));
      goto LABEL_11;
    }
    if ( objc_msgSend(a3, "objectForKey:", CFSTR("LocalFWImage")) )
    {
      v17 = objc_msgSend(a3, "objectForKey:", CFSTR("LocalFWImage"));
      v18 = objc_msgSend(a3, "objectForKey:", CFSTR("LocalBuildManifest"));
      v19 = objc_msgSend(a3, "objectForKey:", CFSTR("LocalSignature"));
      v20 = objc_msgSend(a3, "objectForKey:", CFSTR("LocalCertificate"));
      v32 = objc_msgSend(a3, "objectForKey:", CFSTR("LocalHash"));
      -[FudPluginDelegate log:format:](
        self->delegate,
        "log:format:",
        6LL,
        CFSTR("%s: local files fw=%@ manifest=%@ signature=%@ certificate=%@"),
        "-[EAAccessoryUpdater findFirmwareWithOptions:remote:]",
        v17,
        v18,
        v19,
        v20);
      if ( !-[NSFileManager fileExistsAtPath:](
              +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"),
              "fileExistsAtPath:",
              v17)
        || v18
        && !-[NSFileManager fileExistsAtPath:](
              +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"),
              "fileExistsAtPath:",
              v18) )
      {
        goto LABEL_7;
      }
      v31 = +[NSDictionary dictionaryWithContentsOfFile:](
              &OBJC_CLASS___NSDictionary,
              "dictionaryWithContentsOfFile:",
              v18);
      v21 = +[NSData dataWithContentsOfFile:](&OBJC_CLASS___NSData, "dataWithContentsOfFile:", v19);
      v22 = +[NSData dataWithContentsOfFile:](&OBJC_CLASS___NSData, "dataWithContentsOfFile:", v20);
      v23 = v22;
      if ( !v19 || v21 )
      {
        if ( !v20 || v22 )
        {
          if ( v32 )
          {
            v30 = +[NSData dataWithContentsOfFile:options:error:](
                    &OBJC_CLASS___NSData,
                    "dataWithContentsOfFile:options:error:",
                    v32,
                    1LL,
                    0LL);
            if ( !v30 )
            {
              -[FudPluginDelegate log:format:](
                self->delegate,
                "log:format:",
                3LL,
                CFSTR("%s: Can not open hash file (%@)"),
                "-[EAAccessoryUpdater findFirmwareWithOptions:remote:]",
                v32);
              goto LABEL_7;
            }
          }
          else
          {
            v30 = 0LL;
          }
          if ( v17 && (!v18 || v31) )
          {
            -[EAFirmwareUpdater setFirmwareURL:withManifest:signature:certificate:hash:](
              self->firmwareUpdater,
              "setFirmwareURL:withManifest:signature:certificate:hash:",
              +[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v17),
              v31,
              v21,
              v23,
              v30);
            goto LABEL_11;
          }
        }
        else
        {
          -[FudPluginDelegate log:format:](
            self->delegate,
            "log:format:",
            3LL,
            CFSTR("%s: Can not open certificate file (%@)"),
            "-[EAAccessoryUpdater findFirmwareWithOptions:remote:]",
            v20);
        }
      }
      else
      {
        -[FudPluginDelegate log:format:](
          self->delegate,
          "log:format:",
          3LL,
          CFSTR("%s: Can not open signature file (%@)"),
          "-[EAAccessoryUpdater findFirmwareWithOptions:remote:]",
          v19);
      }
    }
    else
    {
LABEL_54:
      if ( (unsigned int)MGGetBoolAnswer(CFSTR("InternalBuild"), v10)
        && self->dropboxPath
        && -[NSFileManager fileExistsAtPath:](
             +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"),
             "fileExistsAtPath:",
             -[NSURL path](self->dropboxPath, "path")) )
      {
        v35 = 0LL;
        v24 = -[EAAccessoryUpdater prepareFirmwareBundlesFromDropbox:error:](
                self,
                "prepareFirmwareBundlesFromDropbox:error:",
                v7,
                &v35);
        -[FudPluginDelegate didFind:info:updateAvailable:needsDownload:error:](
          self->delegate,
          "didFind:info:updateAvailable:needsDownload:error:",
          v24,
          v7,
          v24,
          0LL,
          v35);
        return;
      }
      if ( !self->localFilePath )
      {
        if ( v8 )
        {
          if ( -[EAFirmwareUpdater serialNumber](self->firmwareUpdater, "serialNumber") )
          {
            v28 = +[NSString stringWithFormat:](
                    &OBJC_CLASS___NSString,
                    "stringWithFormat:",
                    CFSTR("%@%@/%@"),
                    CFSTR("/var/run/fud/seed/"),
                    -[EAFirmwareUpdater modelNumber](self->firmwareUpdater, "modelNumber"),
                    -[EAFirmwareUpdater serialNumber](self->firmwareUpdater, "serialNumber"));
            if ( v28 )
            {
              if ( -[NSURL checkResourceIsReachableAndReturnError:](
                     +[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", v28),
                     "checkResourceIsReachableAndReturnError:",
                     0LL) )
              {
                -[FudPluginDelegate log:format:](
                  self->delegate,
                  "log:format:",
                  7LL,
                  CFSTR("%s: User previously declined update for this accessory %@ (%@), ignoring this update"),
                  "-[EAAccessoryUpdater findFirmwareWithOptions:remote:]",
                  self->deviceClass,
                  -[EAFirmwareUpdater serialNumber](self->firmwareUpdater, "serialNumber"));
                delegate = self->delegate;
                v14 = 0LL;
                v15 = 0LL;
                v16 = 0LL;
                goto LABEL_13;
              }
            }
          }
          if ( !-[NSString length](deviceClass, "length") )
          {
            -[FudPluginDelegate log:format:](
              self->delegate,
              "log:format:",
              7LL,
              CFSTR("%s: Accessory name unavailable for %@, using deviceClass"),
              "-[EAAccessoryUpdater findFirmwareWithOptions:remote:]",
              self->deviceClass);
            deviceClass = self->deviceClass;
          }
        }
        firmwareUpdater = self->firmwareUpdater;
        v33[0] = _NSConcreteStackBlock;
        v33[1] = 3254779904LL;
        v33[2] = sub_100019A14;
        v33[3] = &unk_100031B00;
        v34 = v8;
        v33[4] = self;
        v33[5] = deviceClass;
        -[EAFirmwareUpdater findAsset:completion:](firmwareUpdater, "findAsset:completion:", v4, v33);
        return;
      }
      v25 = -[NSFileManager fileExistsAtPath:](
              +[NSFileManager defaultManager](&OBJC_CLASS___NSFileManager, "defaultManager"),
              "fileExistsAtPath:",
              self->localFilePath);
      v26 = self->delegate;
      localFilePath = self->localFilePath;
      if ( v25 )
      {
        -[FudPluginDelegate log:format:](
          v26,
          "log:format:",
          5LL,
          CFSTR("%s: attempting to use file from dropbox: %@"),
          "-[EAAccessoryUpdater findFirmwareWithOptions:remote:]",
          localFilePath);
        -[EAFirmwareUpdater setFirmwareLocalURL:](
          self->firmwareUpdater,
          "setFirmwareLocalURL:",
          +[NSURL fileURLWithPath:](&OBJC_CLASS___NSURL, "fileURLWithPath:", self->localFilePath));
        delegate = self->delegate;
        v14 = 1LL;
        v15 = 0LL;
        goto LABEL_12;
      }
      -[FudPluginDelegate log:format:](
        v26,
        "log:format:",
        3LL,
        CFSTR("%s: invalid dropbox provided: %@"),
        "-[EAAccessoryUpdater findFirmwareWithOptions:remote:]",
        localFilePath);
    }
  }
  else
  {
    -[FudPluginDelegate log:format:](
      self->delegate,
      "log:format:",
      3LL,
      CFSTR("%s: No EA Accessory info for %@"),
      "-[EAAccessoryUpdater findFirmwareWithOptions:remote:]",
      self->deviceClass);
  }
LABEL_7:
  v11 = self->delegate;
  v12 = +[NSError errorWithDomain:code:userInfo:](
          &OBJC_CLASS___NSError,
          "errorWithDomain:code:userInfo:",
          CFSTR("com.apple.EAAccessoryUpdater"),
          -1LL,
          0LL);
  delegate = v11;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
LABEL_14:
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  -[FudPluginDelegate didFind:info:updateAvailable:needsDownload:error:](
    delegate,
    "didFind:info:updateAvailable:needsDownload:error:",
    v14,
    v15,
    v16,
    0LL,
    v12);
}