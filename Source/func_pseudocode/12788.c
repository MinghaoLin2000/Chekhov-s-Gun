+[NSError tsu_errorWithDomain:code:alertTitle:alertMessage:]
id __cdecl +[NSError tsu_errorWithDomain:code:alertTitle:alertMessage:](
        id a1,
        SEL a2,
        id a3,
        signed __int64 a4,
        id a5,
        id a6)
{
  return objc_msgSend(a1, "tsu_errorWithDomain:code:alertTitle:alertMessage:userInfo:", a3, a4, a5, a6, 0LL);
}