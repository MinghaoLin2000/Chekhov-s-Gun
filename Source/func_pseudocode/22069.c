_LogCategory_Unspecified
__int64 LogCategory_Unspecified()
{
  if ( qword_10000C2E0 != -1 )
    dispatch_once(&qword_10000C2E0, &stru_1000082D0);
  return qword_10000C2E8;
}