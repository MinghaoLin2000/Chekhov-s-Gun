-[TSPComponentWriteChannelAdapter close]
void __cdecl -[TSPComponentWriteChannelAdapter close](TSPComponentWriteChannelAdapter *self, SEL a2)
{
  void *v3; // x20
  dispatch_queue_s *queue; // x0
  _QWORD block[5]; // [xsp+8h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = off_1001F5D88;
  if ( dispatch_get_specific(off_1001F5D88) == v3 )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    -[TSPComponentWriteChannelAdapter _close](self, "_close");
  }
  else
  {
    queue = (dispatch_queue_s *)self->_queue;
    block[0] = _NSConcreteStackBlock;
    block[1] = 3254779904LL;
    block[2] = sub_100059588;
    block[3] = &unk_1001D1698;
    block[4] = self;
    dispatch_sync(queue, block);
  }
}