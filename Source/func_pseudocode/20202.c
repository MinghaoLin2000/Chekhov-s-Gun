__Z21liteSetThreadPriority15lite_priority_e
__int64 __fastcall liteSetThreadPriority(unsigned int a1)
{
  qos_class_t v1; // w0

  if ( a1 > 5 )
    v1 = QOS_CLASS_UNSPECIFIED;
  else
    v1 = dword_10006D440[a1];
  return pthread_set_qos_class_self_np(v1, 0);
}