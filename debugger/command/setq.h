/* Set a variable definition without variable references but don't 
   expand variable references in the value part of psz_string. */
static debug_return_t 
dbg_cmd_setq(void) 
{
  char *psz_string = psz_debugger_args;
  dbg_cmd_set_var(psz_string, 0);
  return debug_readloop;
}