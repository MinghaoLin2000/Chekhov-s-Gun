-[TSPMemoryReadChannel initWithNSData:]
TSPMemoryReadChannel *__cdecl -[TSPMemoryReadChannel initWithNSData:](TSPMemoryReadChannel *self, SEL a2, id a3)
{
  void *v4; // x20
  TSPMemoryReadChannel *v5; // x19

  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "tsp_dispatchData"));
  v5 = -[TSPMemoryReadChannel initWithDispatchData:](self, "initWithDispatchData:", v4);
  objc_release(v4);
  return v5;
}