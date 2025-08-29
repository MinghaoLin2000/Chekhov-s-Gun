-[AutofillNode .cxx_destruct]
void __cdecl -[AutofillNode .cxx_destruct](AutofillNode *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_children, 0LL);
  objc_storeStrong((id *)&self->_persistentID, 0LL);
  objc_destroyWeak((id *)&self->_parent);
  objc_storeStrong((id *)&self->_parentID, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_name, 0LL);
}