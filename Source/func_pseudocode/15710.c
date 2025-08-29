-[UARPDFUUpdater queryFailedForAccessory:property:error:]
void __cdecl -[UARPDFUUpdater queryFailedForAccessory:property:error:](
        UARPDFUUpdater *self,
        SEL a2,
        id a3,
        unsigned __int64 a4,
        signed __int64 a5)
{
  id v8; // x19
  NSError *v9; // x20
  void *v10; // x22
  void *v11; // x22
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v8 = objc_retain(a3);
  v9 = objc_retainAutoreleasedReturnValue(
         +[NSError errorWithDomain:code:userInfo:](
           &OBJC_CLASS___NSError,
           "errorWithDomain:code:userInfo:",
           kUARPErrorDomain,
           a5,
           0LL));
  switch ( a4 )
  {
    case 0uLL:
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "uarpAccessory"));
      -[UARPDFUUpdater queryCompleteForAccessory:manufacturer:error:](
        self,
        "queryCompleteForAccessory:manufacturer:error:",
        v10,
        0LL,
        v9);
      goto LABEL_12;
    case 1uLL:
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "uarpAccessory"));
      -[UARPDFUUpdater queryCompleteForAccessory:modelName:error:](
        self,
        "queryCompleteForAccessory:modelName:error:",
        v10,
        0LL,
        v9);
      goto LABEL_12;
    case 2uLL:
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "uarpAccessory"));
      -[UARPDFUUpdater queryCompleteForAccessory:serialNumber:error:](
        self,
        "queryCompleteForAccessory:serialNumber:error:",
        v10,
        0LL,
        v9);
      goto LABEL_12;
    case 3uLL:
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "uarpAccessory"));
      -[UARPDFUUpdater queryCompleteForAccessory:hardwareVersion:error:](
        self,
        "queryCompleteForAccessory:hardwareVersion:error:",
        v10,
        0LL,
        v9);
      goto LABEL_12;
    case 4uLL:
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "uarpAccessory"));
      -[UARPDFUUpdater queryCompleteForAccessory:firmwareVersion:error:](
        self,
        "queryCompleteForAccessory:firmwareVersion:error:",
        v10,
        0LL,
        v9);
      goto LABEL_12;
    case 5uLL:
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "uarpAccessory"));
      -[UARPDFUUpdater queryCompleteForAccessory:stagedFirmwareVersion:error:](
        self,
        "queryCompleteForAccessory:stagedFirmwareVersion:error:",
        v10,
        0LL,
        v9);
      goto LABEL_12;
    case 6uLL:
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "uarpAccessory"));
      -[UARPDFUUpdater queryCompleteForAccessory:stats:error:](
        self,
        "queryCompleteForAccessory:stats:error:",
        v10,
        0LL,
        v9);
      goto LABEL_12;
    case 0xBuLL:
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "uarpAccessory"));
      -[UARPDFUUpdater queryCompleteForAccessory:appleModelNumber:error:](
        self,
        "queryCompleteForAccessory:appleModelNumber:error:",
        v10,
        0LL,
        v9);
      goto LABEL_12;
    case 0xCuLL:
      v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "uarpAccessory"));
      -[UARPDFUUpdater queryCompleteForAccessory:hwFusingType:error:](
        self,
        "queryCompleteForAccessory:hwFusingType:error:",
        v11,
        0LL,
        v9);
      objc_release(v11);
      goto LABEL_11;
    case 0xDuLL:
LABEL_11:
      v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "uarpAccessory"));
      -[UARPDFUUpdater queryCompleteForAccessory:friendlyName:error:](
        self,
        "queryCompleteForAccessory:friendlyName:error:",
        v10,
        0LL,
        v9);
LABEL_12:
      objc_release(v10);
      break;
    default:
      break;
  }
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}