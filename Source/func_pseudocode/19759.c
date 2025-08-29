-[ColorInfo .cxx_destruct]
void __cdecl -[ColorInfo .cxx_destruct](ColorInfo *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->nonStrokeColorspace, 0LL);
  objc_storeStrong((id *)&self->strokeColorspace, 0LL);
  objc_storeStrong((id *)&self->gstateStack, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->colorReason, 0LL);
}