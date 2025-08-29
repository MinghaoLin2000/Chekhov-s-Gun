-[SiriNCService _startEagerMyriadAdvertisingForAction:eventSource:requestInfo:speechRequestOptions:systemUpTime:]
void __cdecl -[SiriNCService _startEagerMyriadAdvertisingForAction:eventSource:requestInfo:speechRequestOptions:systemUpTime:](
        SiriNCService *self,
        SEL a2,
        signed __int64 a3,
        signed __int64 a4,
        id a5,
        id a6,
        unsigned __int64 a7)
{
  unsigned __int64 v12; // x19
  unsigned __int64 v13; // x0
  void *v14; // x20
  __int64 v15; // x23
  int v16; // w24
  id v17; // x0
  void *v18; // x0
  void *v19; // x22
  void *v20; // x23
  void *v21; // x24
  void *v22; // x25
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v12 = (unsigned __int64)objc_retain(a5);
  v13 = (unsigned __int64)objc_retain(a6);
  v14 = (void *)v13;
  if ( (a3 & 0xFFFFFFFFFFFFFFFBLL) == 8 && v12 | v13 )
  {
    v15 = SiriUIRequestSourceFromNCEventSource(a3, a4, objc_msgSend((id)v12, "activationEvent"));
    v16 = SiriUIIsButtonDownRequest();
    v17 = objc_alloc((Class)&OBJC_CLASS___SiriUIRequestOptions);
    if ( v16 )
      v18 = objc_msgSend(v17, "initWithRequestSource:buttonDownTimestamp:", v15, a7);
    else
      v18 = objc_msgSend(v17, "initWithRequestSource:", v15);
    v19 = v18;
    if ( v12 )
    {
      objc_msgSend(v18, "setRequestInfo:", v12);
      v20 = objc_retainAutoreleasedReturnValue(objc_msgSend((id)v12, "speechRequestOptions"));
      objc_release(v20);
      if ( !v20 )
      {
LABEL_12:
        objc_msgSend(v19, "setActivationDeviceIdentifier:", v20);
        -[SiriNCService startMyriadAdvertisingWithRequestOptions:](
          self,
          "startMyriadAdvertisingWithRequestOptions:",
          v19);
        objc_release(v20);
        objc_release(v19);
        goto LABEL_13;
      }
      v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "requestInfo"));
      v22 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "speechRequestOptions"));
      v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v22, "activationDeviceIdentifier"));
      objc_release(v22);
    }
    else
    {
      if ( !v14 )
      {
        v20 = 0LL;
        goto LABEL_12;
      }
      objc_msgSend(v18, "setSpeechRequestOptions:", v14);
      v21 = objc_retainAutoreleasedReturnValue(objc_msgSend(v19, "speechRequestOptions"));
      v20 = objc_retainAutoreleasedReturnValue(objc_msgSend(v21, "activationDeviceIdentifier"));
    }
    objc_release(v21);
    goto LABEL_12;
  }
LABEL_13:
  objc_release(v14);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release((id)v12);
}