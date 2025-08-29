-[ECTIHelperDelegate _handleSelectAllText:]
void __cdecl -[ECTIHelperDelegate _handleSelectAllText:](ECTIHelperDelegate *self, SEL a2, id a3)
{
  -[NSTextField selectText:](self->_textField, "selectText:", self);
}