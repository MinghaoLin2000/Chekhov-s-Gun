__MXMGetInstrumentsLog
__int64 _MXMGetInstrumentsLog()
{
  if ( qword_100011C28 != -1 )
    dispatch_once(&qword_100011C28, &stru_10000C428);
  return qword_100011C20;
}