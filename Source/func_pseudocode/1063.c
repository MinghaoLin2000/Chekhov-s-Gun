-[AMPCapacityBarViewController setBytesUsed:]
void __cdecl -[AMPCapacityBarViewController setBytesUsed:](
        AMPCapacityBarViewController *self,
        SEL a2,
        unsigned __int64 a3)
{
  AMPCapacityBarView *v5; // x21
  AMPCapacityBarView *v6; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  self->_bytesUsed = a3;
  v5 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarViewController capacityBar](self, "capacityBar"));
  -[AMPCapacityBarView setBytesUsed:](v5, "setBytesUsed:", a3);
  objc_release(v5);
  v6 = objc_retainAutoreleasedReturnValue(-[AMPCapacityBarViewController overlayBar](self, "overlayBar"));
  -[AMPCapacityBarView setBytesUsed:](v6, "setBytesUsed:", a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
}