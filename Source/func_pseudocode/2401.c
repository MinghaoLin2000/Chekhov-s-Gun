-[ProgressViewController .cxx_destruct]
void __cdecl -[ProgressViewController .cxx_destruct](ProgressViewController *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_progress, 0LL);
  objc_destroyWeak((id *)&self->_progressBar);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_destroyWeak((id *)&self->_label);
}