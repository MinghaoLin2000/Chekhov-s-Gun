-[FileSharingListItem .cxx_destruct]
void __cdecl -[FileSharingListItem .cxx_destruct](FileSharingListItem *self, SEL a2)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  objc_storeStrong((id *)&self->_placeholders, 0LL);
  objc_storeStrong((id *)&self->_children, 0LL);
  objc_storeStrong((id *)&self->_icon, 0LL);
  objc_storeStrong((id *)&self->_url, 0LL);
  objc_storeStrong((id *)&self->_path, 0LL);
  objc_storeStrong((id *)&self->_date, 0LL);
  objc_storeStrong((id *)&self->_size, 0LL);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_storeStrong((id *)&self->_name, 0LL);
}