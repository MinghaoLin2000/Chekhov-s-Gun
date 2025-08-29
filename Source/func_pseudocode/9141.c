-[TSPMemoryReadChannel addBarrier:]
void __cdecl -[TSPMemoryReadChannel addBarrier:](TSPMemoryReadChannel *self, SEL a2, id a3)
{
  dispatch_async((dispatch_queue_t)self->_readQueue, a3);
}