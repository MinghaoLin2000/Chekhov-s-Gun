-[job_spool_client_t getLogLeader]
id __cdecl -[job_spool_client_t getLogLeader](job_spool_client_t *self, SEL a2)
{
  return +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%@<%p - client id %d>"),
           objc_opt_class(self, a2),
           self,
           (unsigned int)self->_clientID);
}