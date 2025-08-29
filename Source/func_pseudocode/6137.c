-[ClientRequest setConnection:]
void __cdecl -[ClientRequest setConnection:](ClientRequest *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->_connection, a3);
}