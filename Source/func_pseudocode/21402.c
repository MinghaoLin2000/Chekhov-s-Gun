_$s22localspeechrecognition10ClientInfoV07LoggingC0V5asrID07requestF0022dictationUIInteractionF0AE10Foundation4UUIDV_AKSStcfC
__int64 __usercall ClientInfo.LoggingInfo.init(asrID:requestID:dictationUIInteractionID:)@<X0>(
        __int64 a1@<X0>,
        __int64 a2@<X1>,
        __int64 a3@<X2>,
        __int64 a4@<X3>,
        __int64 a5@<X8>)
{
  __int64 v10; // x24
  __int64 v11; // x1
  __int64 v12; // x16
  void (__fastcall *v13)(__int64, __int64, __int64); // x25
  __int64 v14; // x22
  __int64 result; // x0
  _QWORD *v16; // x8

  v10 = sub_100040F10(0LL);
  sub_100016A24(v10, v11);
  v13 = *(void (__fastcall **)(__int64, __int64, __int64))(v12 + 32);
  v13(a5, a1, v10);
  v14 = type metadata accessor for ClientInfo.LoggingInfo(0LL);
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64))v13)(a5 + *(int *)(v14 + 20), a2, v10);
  v16 = (_QWORD *)(a5 + *(int *)(v14 + 24));
  *v16 = a3;
  v16[1] = a4;
  return result;
}