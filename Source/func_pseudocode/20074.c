-[PKNANSubscriber queue]
id __cdecl -[PKNANSubscriber queue](PKNANSubscriber *self, SEL a2)
{
  OS_dispatch_queue *v3; // x20
  OS_dispatch_queue *v4; // x19
  dispatch_queue_s *v5; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[PKNANSubscriber dispatchQueue](self, "dispatchQueue"));
  objc_release(v3);
  if ( v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[PKNANSubscriber dispatchQueue](self, "dispatchQueue"));
  }
  else
  {
    v4 = (OS_dispatch_queue *)&_dispatch_main_q;
    v5 = objc_retain(&_dispatch_main_q);
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}