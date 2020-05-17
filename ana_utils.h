int init_text_obj(text_ptr *t_obj, process_book_ptr this_book_ptr,pool *this_pool, char *file, int line);
int add_str_to_text_obj(text_ptr t_obj, char *add_str, process_book_ptr this_book_ptr, pool *this_pool);
void dispose_txt_obj(text_ptr *t_obj, process_book_ptr this_book_ptr);
int remove_to_token(char *a, char *b, char *c);
void write_log(const char *err_msg);
int fill_in_specs(int argc, char **argv, int *got_str, int *got_num, char **spec_str, int *spec_num, char *ana_cmd, style_ptr this_style, process_book_ptr this_book);
void reform_http_string(char *the_str, char *param_str);
int create_process_book(process_book_ptr *this_process_book, style_ptr *this_style_ptr, Tcl_Interp *this_interp, char *bookname, char *http_post_args, request_rec *request_rec, pool *current_pool);
int ana_stream_open(char *this_file, apr_file_t **stream, apr_int32_t flags, pool *current_p);
hash_lilo_obj_ptr init_hash_lilo(int htable_size,  int capacity, void *init_callback, void *dispos_callback, process_book_ptr this_book_ptr, pool *current_pool);
sgml_obj_ptr create_sgml_obj(void *this_book, int *allocated, int *sought_num, process_book_ptr this_book_ptr);
void delete_sgml_obj(void *this_sgml_obj, int *reclaimed, int *sought, process_book_ptr this_book);
void *create_index_obj(void *this_book, int *allocated, int *sought_num, process_book_ptr this_book_ptr);
void delete_index_obj(void *this_index_obj, int *reclaimed, int *sought, process_book_ptr);
int clone_sgml_obj(sgml_obj_ptr this_sgml_el,sgml_obj_ptr *pc_clone, process_book_ptr this_book_ptr, char* file, int line);
int dispose_clone_sgml_obj(sgml_obj_ptr *this_sgml_el, process_book_ptr this_process_book_ptr);
int init_sgml_obj(sgml_obj_ptr *this_sgml_el,  process_book_ptr this_book, pool *this_pool, char *file, int line);
int read_num(int *this_no, apr_file_t *in_f, int place);
int get_int(const unsigned char *ptr, int ind);
int upend (int number);
int read_this_el(int place, apr_file_t *src_ngv, apr_file_t *src_rgv,  sgml_obj_ptr this_sgml_el, process_book_ptr this_book);
int read_num_str(text_ptr t_obj, apr_file_t *src_ngv, process_book_ptr this_book_ptr, pool *this_pool);
int empty_text_obj(text_ptr *t_obj, process_book_ptr this_book_ptr, pool *this_pool);
int init_attr_obj(attr_ptr *this_attr, process_book_ptr this_book, pool *this_pool);
int set_text_obj_size(text_ptr t_obj, process_book_ptr this_book_ptr, pool *this_pool);
int write_output(style_ptr this_style, process_book_ptr this_book_ptr, char *this_str);
int add_str_to_hndl(char **hndl, char *str,long *hndl_size, pool *this_pool);
int make_element_path(sgml_obj_ptr this_sgml_el, process_book_ptr this_book);
int get_next_sgml_obj(sgml_obj_ptr *this_sgml_el, int sought_el, process_book_ptr this_book);
int init_txt_hndl(char ***txt, long *txt_len,  pool *this_pool);
int read_str_exfile(text_ptr t_obj, int place, apr_file_t *in, style_ptr this_style, process_book_ptr this_book, pool *this_pool);
int http_inf_callback(void *ti, const char *name, const char *value);
int valid_num_param(char *num_str, char *nparam, char *callcmd, int *the_num, style_ptr this_style, process_book_ptr this_book);
void *get_hash_lilo_obj(hash_lilo_obj_ptr obj_ptr, int sought_num, char *sought_str, process_book_ptr this_book_ptr, int type);
hash_lilo_ptr new_hash_lilo_item(void *the_data, hash_lilo_ptr prev_hash_obj, int comp_int, char *comp_str, process_book_ptr this_book_ptr, pool *current_pool);
int load_ex_file_off_back(apr_file_t *in, int start_pt, int chars_req, char *buf_read, int *chars_read, process_book_ptr this_book_ptr);
void *ana_ap_realloc(pool *the_p, void *array, size_t size_old, size_t size_new);
void close_ana_book(process_book_ptr this_book, process_book_ptr *current_books, int error);
int clone_index_obj(IndexFileReadPtr this_index, IndexFileReadPtr *index_clone, process_book_ptr this_book_ptr, pool *this_pool);
int dispose_clone_index_obj(IndexFileReadPtr this_index, process_book_ptr this_book_ptr);
int init_output_buffer(buffer_ptr *output_buf, process_book_ptr this_book_ptr, pool *current_pool);
void add_str_to_buf(style_ptr this_style, char *str, process_book_ptr this_book_ptr);
void delete_output_buffer(buffer_ptr *output_buf, process_book_ptr this_book);
void close_all_books(process_book_ptr *current_books);
int fill_in_nums(int argc, char **argv, int *spec_num1, int *spec_num2, char *ana_cmd, style_ptr this_style_ptr, process_book_ptr this_book);
void clear_hash_lilo(process_book_ptr this_book);
void clear_sgml_items(process_book_ptr this_book);
int check_process_book(process_book_ptr this_book, style_ptr this_style_ptr, char *command, char* line, int lineno);
void check_hash_lilo(process_book_ptr this_book);
#if defined(WIN32)
void shortToLong(char *str, int length, char *rstr, int rlength);
#endif
int read_query_cond(char *the_line, cond_ptr cond, process_book_ptr current_book,  pool *this_pool, style_ptr this_style_ptr);
int check_query_cond(int argc, char *the_line, cond_ptr cond, process_book_ptr this_book_ptr, pool *current_pool, style_ptr this_style_ptr);
int write_num(unsigned long, apr_file_t *, long int);
int write_num_str(unsigned long, char *, apr_file_t *);
void write_error_output(style_ptr this_style, process_book_ptr this_book_ptr, char *this_str);
void createBooksArray(Tcl_Interp *tcl_interp, char *path);
void globalHttppost(Tcl_Interp *tcl_interp);
int compareMemSlots(const void *a, const void *b);
