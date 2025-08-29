-[lite_job_t printer_preferred_landscape]
int __cdecl -[lite_job_t printer_preferred_landscape](lite_job_t *self, SEL a2)
{
  lite_printer_t *v2; // x19
  int v3; // w20

  v2 = objc_retainAutoreleasedReturnValue(-[lite_job_t printer](self, "printer"));
  v3 = -[lite_printer_t preferred_landscape](v2, "preferred_landscape");
  objc_release(v2);
  return v3;
}