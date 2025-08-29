-[ECTIHelperDelegate control:textView:doCommandBySelector:]
bool __cdecl -[ECTIHelperDelegate control:textView:doCommandBySelector:](
        ECTIHelperDelegate *self,
        SEL a2,
        id a3,
        id a4,
        SEL a5)
{
  bool v6; // w19

  if ( "insertNewline:" == a5 || "cancelOperation:" == a5 )
  {
    v6 = 1;
    self->_editingComplete = 1;
    -[ECTIHelperDelegate _controlTextDidChange](self, "_controlTextDidChange", a3, a4);
  }
  else
  {
    return !self->_hasFocus && ("moveLeft:" == a5 || "moveRight:" == a5 || "moveUp:" == a5 || "moveDown:" == a5);
  }
  return v6;
}