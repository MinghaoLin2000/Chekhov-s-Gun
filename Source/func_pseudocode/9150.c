+[NSError tsp_recoverableErrorWithCode:]
id __cdecl +[NSError tsp_recoverableErrorWithCode:](id a1, SEL a2, signed __int64 a3)
{
  return objc_msgSend(a1, "tsp_errorWithCode:userInfo:isRecoverable:", a3, 0LL, 1LL);
}