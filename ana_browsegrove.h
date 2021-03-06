int make_reader_file(char **argv, request_rec *r, char *http_post_args, char *output_file, pool *this_pool);
void load_in_global_config_file(Tcl_Interp *the_interp, pool *this_pool, int initalisation);
void send_ana_param_error(style_ptr this_style_ptr, char *functname, char *numparams, char *specparam, process_book_ptr this_book);
int is_valid_el(char *el_num_str, char *ana_cmd, sgml_obj_ptr *this_sgml_el, process_book_ptr this_book, style_ptr this_style);
int fill_in_specs(int argc, char **argv, int *got_str, int *got_num, char **spec_str, int *spec_num, char *ana_cmd, style_ptr this_style, process_book_ptr this_book);
int find_parent(int start_el, int n_relative, char *gi, int *el_found, process_book_ptr this_book);
int find_ancestor(int start_el, int n_relative, char *gi, int *el_found, process_book_ptr this_book);
int find_lsibling(int start_el, int n_relative, char *gi, int *el_found, process_book_ptr this_book);
int find_rsibling(int start_el, int n_relative, char *gi, int *el_found, process_book_ptr this_book);
int find_prev_el(int start_el, int n_relative, char *gi, int *el_found, process_book_ptr this_book);
int find_next_el(int start_el, int n_relative, char *gi, int *el_found, process_book_ptr this_book);
int find_descendant(int parent, int n_relative, char *gi, int *el_found, process_book_ptr this_book);
int find_child(int parent, int n_relative, char *gi, int *el_found, process_book_ptr this_book);
int get_book_info(request_rec *r, char *http_post_args, pool *current_pool);
int init_ana_interp(style_ptr *this_style, process_book_ptr this_book);
int do_start_end_ana_file(int this_el, char *param, style_ptr this_style, process_book_ptr book_now);
int output_ana_toc(int this_el,  int levs_sought, int levs_found, style_ptr this_style, process_book_ptr this_book);
int has_tspec(sgml_obj_ptr this_sgml_el, style_ptr this_style, process_book_ptr this_book);
int find_tcl_cmd(Tcl_Interp *style_interp, text_obj *path, char *tcl_cmdstr);
void update_curr_search(int this_el, process_book_ptr this_book);
int is_toc_el(sgml_obj_ptr this_sgml_el, style_ptr this_style, process_book_ptr this_book);
int process_style(sgml_obj_ptr this_sgml_el, style_ptr this_style, process_book_ptr this_book, char *param);
int output_element(int this_el, int output_sibs, int output_right, style_ptr this_style, int *last_el, bounds_ptr bounds, process_book_ptr this_book);
int output_start(sgml_obj_ptr this_sgml_el, style_ptr this_style, process_book_ptr this_book);
int output_content(int this_el, style_ptr this_style, int *last_el, bounds_ptr bounds, process_book_ptr this_book);
int output_end(int this_el, style_ptr this_style, process_book_ptr this_book);
void increment_curr_search(process_book_ptr this_book);
void delete_tcl_style(style_ptr this_style, process_book_ptr this_book_ptr);
int get_el_sgp_rel_pos(int *new_start_el, int sgp_pos, process_book_ptr this_book_ptr);
int get_real_rel_pos(int *new_start_el, int *new_start_offset, process_book_ptr this_book_ptr);
int get_sgp_rel_pos(int *new_start_el, int *new_start_offset, int sgp_pos, process_book_ptr process_book_ptr);
int get_rel_pos(sgml_obj_ptr this_sgml_el, int offset, int nchars, int *new_start_el, int *new_start_offset, process_book_ptr this_book);
int format_arbitrary_span(char *spec_str, char **tc_return, bounds_ptr bounds, int context, process_book_ptr this_book_ptr, pool *current_pool);
int walk_down_tree(style_ptr this_style, int new_start_el, process_book_ptr this_book_ptr);
int walk_up_tree(style_ptr this_style, int new_start_el, process_book_ptr this_book_ptr);
int calc_prev_chars(struct bounds_obj *bounds, int offset, sgml_obj_ptr this_sgml_el, int nchars, process_book_ptr this_book);
int calc_these_chars(struct bounds_obj *bounds, int offset1, int offset2, sgml_obj_ptr this_sgml_el1, sgml_obj_ptr this_sgml_el2, process_book_ptr this_book_ptr);
int calc_next_chars(struct bounds_obj *bounds, int offset, sgml_obj_ptr this_sgml_el, int nchars, process_book_ptr this_book);
int format_kwic_span(bounds_ptr bounds, style_ptr kwic_style, process_book_ptr this_book);
void previous_search(process_book_ptr this_book_ptr, int *prev_end_el, int *prev_end_offset);
void next_search(process_book_ptr this_book_ptr, int *next_end_el, int *next_end_offset);
int make_new_tcl_style(char *anv_file, char *book_name, style_ptr *this_style, buffer_obj *file_spec, process_book_ptr this_book, int first, int header_needed);
void send_http_header(request_rec *r, process_book_ptr this_book_ptr);
int send_cookies(void *rec, const char *key, const char *value);
int send_ana_headers(void *rec, const char *key, const char *value);
