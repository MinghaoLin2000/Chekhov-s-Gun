-[ColorInfo setColorReason:]
void __cdecl -[ColorInfo setColorReason:](ColorInfo *self, SEL a2, id a3)
{
  id v5; // x20
  NSString **p_colorReason; // x21
  NSString *colorReason; // t1
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v5 = objc_retain(a3);
  colorReason = self->colorReason;
  p_colorReason = &self->colorReason;
  if ( !colorReason )
    objc_storeStrong((id *)p_colorReason, a3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}