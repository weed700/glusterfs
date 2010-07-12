/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _GLUSTER1_H_RPCGEN
#define _GLUSTER1_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


enum gf1_cluster_type {
	GF_CLUSTER_TYPE_NONE = 0,
	GF_CLUSTER_TYPE_STRIPE = 0 + 1,
	GF_CLUSTER_TYPE_REPLICATE = 0 + 2,
};
typedef enum gf1_cluster_type gf1_cluster_type;

enum gf1_cli_replace_op {
	GF_REPLACE_OP_NONE = 0,
	GF_REPLACE_OP_START = 0 + 1,
	GF_REPLACE_OP_STOP = 0 + 2,
	GF_REPLACE_OP_PAUSE = 0 + 3,
	GF_REPLACE_OP_ABORT = 0 + 4,
	GF_REPLACE_OP_STATUS = 0 + 5,
};
typedef enum gf1_cli_replace_op gf1_cli_replace_op;

enum gf1_cli_enum_friends_list {
	GF_CLI_LIST_ALL = 1,
};
typedef enum gf1_cli_enum_friends_list gf1_cli_enum_friends_list;

struct gf1_cli_probe_req {
	char *hostname;
};
typedef struct gf1_cli_probe_req gf1_cli_probe_req;

struct gf1_cli_probe_rsp {
	int op_ret;
	int op_errno;
	char *hostname;
};
typedef struct gf1_cli_probe_rsp gf1_cli_probe_rsp;

struct gf1_cli_deprobe_req {
	char *hostname;
};
typedef struct gf1_cli_deprobe_req gf1_cli_deprobe_req;

struct gf1_cli_deprobe_rsp {
	int op_ret;
	int op_errno;
	char *hostname;
};
typedef struct gf1_cli_deprobe_rsp gf1_cli_deprobe_rsp;

struct gf1_cli_peer_list_req {
	int flags;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gf1_cli_peer_list_req gf1_cli_peer_list_req;

struct gf1_cli_peer_list_rsp {
	int op_ret;
	int op_errno;
	struct {
		u_int friends_len;
		char *friends_val;
	} friends;
};
typedef struct gf1_cli_peer_list_rsp gf1_cli_peer_list_rsp;

struct gf1_cli_create_vol_req {
	char *volname;
	gf1_cluster_type type;
	int count;
	struct {
		u_int bricks_len;
		char *bricks_val;
	} bricks;
};
typedef struct gf1_cli_create_vol_req gf1_cli_create_vol_req;

struct gf1_cli_create_vol_rsp {
	int op_ret;
	int op_errno;
	char *volname;
};
typedef struct gf1_cli_create_vol_rsp gf1_cli_create_vol_rsp;

struct gf1_cli_delete_vol_req {
	char *volname;
};
typedef struct gf1_cli_delete_vol_req gf1_cli_delete_vol_req;

struct gf1_cli_delete_vol_rsp {
	int op_ret;
	int op_errno;
	char *volname;
};
typedef struct gf1_cli_delete_vol_rsp gf1_cli_delete_vol_rsp;

struct gf1_cli_start_vol_req {
	char *volname;
};
typedef struct gf1_cli_start_vol_req gf1_cli_start_vol_req;

struct gf1_cli_start_vol_rsp {
	int op_ret;
	int op_errno;
	char *volname;
};
typedef struct gf1_cli_start_vol_rsp gf1_cli_start_vol_rsp;

struct gf1_cli_stop_vol_req {
	char *volname;
};
typedef struct gf1_cli_stop_vol_req gf1_cli_stop_vol_req;

struct gf1_cli_stop_vol_rsp {
	int op_ret;
	int op_errno;
	char *volname;
};
typedef struct gf1_cli_stop_vol_rsp gf1_cli_stop_vol_rsp;

struct gf1_cli_rename_vol_req {
	char *old_volname;
	char *new_volname;
};
typedef struct gf1_cli_rename_vol_req gf1_cli_rename_vol_req;

struct gf1_cli_rename_vol_rsp {
	int op_ret;
	int op_errno;
	char *volname;
};
typedef struct gf1_cli_rename_vol_rsp gf1_cli_rename_vol_rsp;

struct gf1_cli_defrag_vol_req {
	char *volname;
};
typedef struct gf1_cli_defrag_vol_req gf1_cli_defrag_vol_req;

struct gf1_cli_defrag_vol_rsp {
	int op_ret;
	int op_errno;
	char *volname;
};
typedef struct gf1_cli_defrag_vol_rsp gf1_cli_defrag_vol_rsp;

struct gf1_cli_add_brick_req {
	char *volname;
	gf1_cluster_type type;
	int count;
	struct {
		u_int bricks_len;
		char *bricks_val;
	} bricks;
};
typedef struct gf1_cli_add_brick_req gf1_cli_add_brick_req;

struct gf1_cli_add_brick_rsp {
	int op_ret;
	int op_errno;
	char *volname;
};
typedef struct gf1_cli_add_brick_rsp gf1_cli_add_brick_rsp;

struct gf1_cli_remove_brick_req {
	char *volname;
	gf1_cluster_type type;
	int count;
	struct {
		u_int bricks_len;
		char *bricks_val;
	} bricks;
};
typedef struct gf1_cli_remove_brick_req gf1_cli_remove_brick_req;

struct gf1_cli_remove_brick_rsp {
	int op_ret;
	int op_errno;
	char *volname;
};
typedef struct gf1_cli_remove_brick_rsp gf1_cli_remove_brick_rsp;

struct gf1_cli_replace_brick_req {
	char *volname;
	gf1_cli_replace_op op;
	struct {
		u_int src_brick_len;
		char *src_brick_val;
	} src_brick;
	struct {
		u_int dst_brick_len;
		char *dst_brick_val;
	} dst_brick;
};
typedef struct gf1_cli_replace_brick_req gf1_cli_replace_brick_req;

struct gf1_cli_replace_brick_rsp {
	int op_ret;
	int op_errno;
	char *volname;
};
typedef struct gf1_cli_replace_brick_rsp gf1_cli_replace_brick_rsp;

struct gf1_cli_set_vol_req {
	char *volname;
	struct {
		u_int dict_len;
		char *dict_val;
	} dict;
};
typedef struct gf1_cli_set_vol_req gf1_cli_set_vol_req;

struct gf1_cli_set_vol_rsp {
	int op_ret;
	int op_errno;
	char *volname;
};
typedef struct gf1_cli_set_vol_rsp gf1_cli_set_vol_rsp;

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_gf1_cluster_type (XDR *, gf1_cluster_type*);
extern  bool_t xdr_gf1_cli_replace_op (XDR *, gf1_cli_replace_op*);
extern  bool_t xdr_gf1_cli_enum_friends_list (XDR *, gf1_cli_enum_friends_list*);
extern  bool_t xdr_gf1_cli_probe_req (XDR *, gf1_cli_probe_req*);
extern  bool_t xdr_gf1_cli_probe_rsp (XDR *, gf1_cli_probe_rsp*);
extern  bool_t xdr_gf1_cli_deprobe_req (XDR *, gf1_cli_deprobe_req*);
extern  bool_t xdr_gf1_cli_deprobe_rsp (XDR *, gf1_cli_deprobe_rsp*);
extern  bool_t xdr_gf1_cli_peer_list_req (XDR *, gf1_cli_peer_list_req*);
extern  bool_t xdr_gf1_cli_peer_list_rsp (XDR *, gf1_cli_peer_list_rsp*);
extern  bool_t xdr_gf1_cli_create_vol_req (XDR *, gf1_cli_create_vol_req*);
extern  bool_t xdr_gf1_cli_create_vol_rsp (XDR *, gf1_cli_create_vol_rsp*);
extern  bool_t xdr_gf1_cli_delete_vol_req (XDR *, gf1_cli_delete_vol_req*);
extern  bool_t xdr_gf1_cli_delete_vol_rsp (XDR *, gf1_cli_delete_vol_rsp*);
extern  bool_t xdr_gf1_cli_start_vol_req (XDR *, gf1_cli_start_vol_req*);
extern  bool_t xdr_gf1_cli_start_vol_rsp (XDR *, gf1_cli_start_vol_rsp*);
extern  bool_t xdr_gf1_cli_stop_vol_req (XDR *, gf1_cli_stop_vol_req*);
extern  bool_t xdr_gf1_cli_stop_vol_rsp (XDR *, gf1_cli_stop_vol_rsp*);
extern  bool_t xdr_gf1_cli_rename_vol_req (XDR *, gf1_cli_rename_vol_req*);
extern  bool_t xdr_gf1_cli_rename_vol_rsp (XDR *, gf1_cli_rename_vol_rsp*);
extern  bool_t xdr_gf1_cli_defrag_vol_req (XDR *, gf1_cli_defrag_vol_req*);
extern  bool_t xdr_gf1_cli_defrag_vol_rsp (XDR *, gf1_cli_defrag_vol_rsp*);
extern  bool_t xdr_gf1_cli_add_brick_req (XDR *, gf1_cli_add_brick_req*);
extern  bool_t xdr_gf1_cli_add_brick_rsp (XDR *, gf1_cli_add_brick_rsp*);
extern  bool_t xdr_gf1_cli_remove_brick_req (XDR *, gf1_cli_remove_brick_req*);
extern  bool_t xdr_gf1_cli_remove_brick_rsp (XDR *, gf1_cli_remove_brick_rsp*);
extern  bool_t xdr_gf1_cli_replace_brick_req (XDR *, gf1_cli_replace_brick_req*);
extern  bool_t xdr_gf1_cli_replace_brick_rsp (XDR *, gf1_cli_replace_brick_rsp*);
extern  bool_t xdr_gf1_cli_set_vol_req (XDR *, gf1_cli_set_vol_req*);
extern  bool_t xdr_gf1_cli_set_vol_rsp (XDR *, gf1_cli_set_vol_rsp*);

#else /* K&R C */
extern bool_t xdr_gf1_cluster_type ();
extern bool_t xdr_gf1_cli_replace_op ();
extern bool_t xdr_gf1_cli_enum_friends_list ();
extern bool_t xdr_gf1_cli_probe_req ();
extern bool_t xdr_gf1_cli_probe_rsp ();
extern bool_t xdr_gf1_cli_deprobe_req ();
extern bool_t xdr_gf1_cli_deprobe_rsp ();
extern bool_t xdr_gf1_cli_peer_list_req ();
extern bool_t xdr_gf1_cli_peer_list_rsp ();
extern bool_t xdr_gf1_cli_create_vol_req ();
extern bool_t xdr_gf1_cli_create_vol_rsp ();
extern bool_t xdr_gf1_cli_delete_vol_req ();
extern bool_t xdr_gf1_cli_delete_vol_rsp ();
extern bool_t xdr_gf1_cli_start_vol_req ();
extern bool_t xdr_gf1_cli_start_vol_rsp ();
extern bool_t xdr_gf1_cli_stop_vol_req ();
extern bool_t xdr_gf1_cli_stop_vol_rsp ();
extern bool_t xdr_gf1_cli_rename_vol_req ();
extern bool_t xdr_gf1_cli_rename_vol_rsp ();
extern bool_t xdr_gf1_cli_defrag_vol_req ();
extern bool_t xdr_gf1_cli_defrag_vol_rsp ();
extern bool_t xdr_gf1_cli_add_brick_req ();
extern bool_t xdr_gf1_cli_add_brick_rsp ();
extern bool_t xdr_gf1_cli_remove_brick_req ();
extern bool_t xdr_gf1_cli_remove_brick_rsp ();
extern bool_t xdr_gf1_cli_replace_brick_req ();
extern bool_t xdr_gf1_cli_replace_brick_rsp ();
extern bool_t xdr_gf1_cli_set_vol_req ();
extern bool_t xdr_gf1_cli_set_vol_rsp ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_GLUSTER1_H_RPCGEN */
