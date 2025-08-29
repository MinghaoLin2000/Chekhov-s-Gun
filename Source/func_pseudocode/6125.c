-[ClientRequest setRequestQueueEntry:]
void __cdecl -[ClientRequest setRequestQueueEntry:](ClientRequest *self, SEL a2, id a3)
{
  objc_storeWeak((id *)&self->_requestQueueEntry, a3);
}