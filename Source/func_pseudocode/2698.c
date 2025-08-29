-[AutofillNode setParent:]
void __cdecl -[AutofillNode setParent:](AutofillNode *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->_parent, a3);
}