_TSUCreateRecursiveQueue
dispatch_queue_s *__fastcall TSUCreateRecursiveQueue(void *a1, void *a2)
{
  id v3; // x20
  dispatch_queue_attr_s *v4; // x19
  dispatch_queue_s *v5; // x20

  v3 = objc_retainAutorelease(a1);
  v4 = objc_retain(a2);
  v5 = dispatch_queue_create((const char *)objc_msgSend(v3, "UTF8String"), v4);
  objc_release(v4);
  dispatch_queue_set_specific(v5, off_1001F6FC0, v5, 0LL);
  return v5;
}