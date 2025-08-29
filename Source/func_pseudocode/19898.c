-[lite_job_t getLogLeader]
id __cdecl -[lite_job_t getLogLeader](lite_job_t *self, SEL a2)
{
  return +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%@<%p - client id %d, job id %d>"),
           objc_opt_class(self, a2),
           self,
           -[IPPSession clientID](self->_ippSession, "clientID"),
           (unsigned int)self->_printd_job_id);
}