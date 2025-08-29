__MXMGetLog
__int64 _MXMGetLog()
{
  if ( qword_100011C18 != -1 )
    dispatch_once(&qword_100011C18, &stru_10000C408);
  return qword_100011C10;
}