static const char *const multilib_raw[] = {
". !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc !mabi=ilp32 !mabi=ilp32d !mabi=lp64 !mabi=lp64d;",
"lib32/ilp32:../lib32/ilp32 march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc mabi=ilp32 !mabi=ilp32d !mabi=lp64 !mabi=lp64d;",
"lib32/ilp32d:../lib32/ilp32d !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc !mabi=ilp32 mabi=ilp32d !mabi=lp64 !mabi=lp64d;",
"lib64/lp64:../lib64/lp64 !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc !mabi=ilp32 !mabi=ilp32d mabi=lp64 !mabi=lp64d;",
"lib64/lp64d:../lib64/lp64d !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc march=rv64imafdc !march=rv64g !march=rv64gc !mabi=ilp32 !mabi=ilp32d !mabi=lp64 mabi=lp64d;",
NULL
};

static const char *const multilib_reuse_raw[] = {
"lib32/ilp32:../lib32/ilp32 !march=rv32imac march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc mabi=ilp32 !mabi=ilp32d !mabi=lp64 !mabi=lp64d;",
"lib32/ilp32:../lib32/ilp32 !march=rv32imac !march=rv32ima march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc mabi=ilp32 !mabi=ilp32d !mabi=lp64 !mabi=lp64d;",
"lib32/ilp32:../lib32/ilp32 !march=rv32imac !march=rv32ima !march=rv32imaf march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc mabi=ilp32 !mabi=ilp32d !mabi=lp64 !mabi=lp64d;",
"lib32/ilp32:../lib32/ilp32 !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc mabi=ilp32 !mabi=ilp32d !mabi=lp64 !mabi=lp64d;",
"lib32/ilp32:../lib32/ilp32 !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc mabi=ilp32 !mabi=ilp32d !mabi=lp64 !mabi=lp64d;",
"lib32/ilp32:../lib32/ilp32 !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc mabi=ilp32 !mabi=ilp32d !mabi=lp64 !mabi=lp64d;",
"lib32/ilp32:../lib32/ilp32 !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc mabi=ilp32 !mabi=ilp32d !mabi=lp64 !mabi=lp64d;",
"lib32/ilp32d:../lib32/ilp32d !march=rv32imac !march=rv32ima !march=rv32imaf march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc !mabi=ilp32 mabi=ilp32d !mabi=lp64 !mabi=lp64d;",
"lib32/ilp32d:../lib32/ilp32d !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc !mabi=ilp32 mabi=ilp32d !mabi=lp64 !mabi=lp64d;",
"lib32/ilp32d:../lib32/ilp32d !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc !mabi=ilp32 mabi=ilp32d !mabi=lp64 !mabi=lp64d;",
"lib64/lp64:../lib64/lp64 !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc !mabi=ilp32 !mabi=ilp32d mabi=lp64 !mabi=lp64d;",
"lib64/lp64:../lib64/lp64 !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc !mabi=ilp32 !mabi=ilp32d mabi=lp64 !mabi=lp64d;",
"lib64/lp64:../lib64/lp64 !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc !mabi=ilp32 !mabi=ilp32d mabi=lp64 !mabi=lp64d;",
"lib64/lp64:../lib64/lp64 !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc !mabi=ilp32 !mabi=ilp32d mabi=lp64 !mabi=lp64d;",
"lib64/lp64:../lib64/lp64 !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc march=rv64imafdc !march=rv64g !march=rv64gc !mabi=ilp32 !mabi=ilp32d mabi=lp64 !mabi=lp64d;",
"lib64/lp64:../lib64/lp64 !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc march=rv64g !march=rv64gc !mabi=ilp32 !mabi=ilp32d mabi=lp64 !mabi=lp64d;",
"lib64/lp64:../lib64/lp64 !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g march=rv64gc !mabi=ilp32 !mabi=ilp32d mabi=lp64 !mabi=lp64d;",
"lib64/lp64d:../lib64/lp64d !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g !march=rv64gc !mabi=ilp32 !mabi=ilp32d !mabi=lp64 mabi=lp64d;",
"lib64/lp64d:../lib64/lp64d !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc !march=rv64g march=rv64gc !mabi=ilp32 !mabi=ilp32d !mabi=lp64 mabi=lp64d;",
"lib64/lp64d:../lib64/lp64d !march=rv32imac !march=rv32ima !march=rv32imaf !march=rv32imafd !march=rv32imafc !march=rv32imafdc !march=rv32g !march=rv32gc !march=rv64imac !march=rv64ima !march=rv64imaf !march=rv64imafd !march=rv64imafc !march=rv64imafdc march=rv64g !march=rv64gc !mabi=ilp32 !mabi=ilp32d !mabi=lp64 mabi=lp64d;",
NULL
};

static const char *const multilib_matches_raw[] = {
"march=rv32imac march=rv32imac;",
"march=rv32ima march=rv32ima;",
"march=rv32imaf march=rv32imaf;",
"march=rv32imafd march=rv32imafd;",
"march=rv32imafc march=rv32imafc;",
"march=rv32imafdc march=rv32imafdc;",
"march=rv32g march=rv32g;",
"march=rv32gc march=rv32gc;",
"march=rv64imac march=rv64imac;",
"march=rv64ima march=rv64ima;",
"march=rv64imaf march=rv64imaf;",
"march=rv64imafd march=rv64imafd;",
"march=rv64imafc march=rv64imafc;",
"march=rv64imafdc march=rv64imafdc;",
"march=rv64g march=rv64g;",
"march=rv64gc march=rv64gc;",
"mabi=ilp32 mabi=ilp32;",
"mabi=ilp32d mabi=ilp32d;",
"mabi=lp64 mabi=lp64;",
"mabi=lp64d mabi=lp64d;",
NULL
};

static const char *multilib_extra = "";

static const char *const multilib_exclusions_raw[] = {
NULL
};

static const char *multilib_options = "march=rv32imac/march=rv32ima/march=rv32imaf/march=rv32imafd/march=rv32imafc/march=rv32imafdc/march=rv32g/march=rv32gc/march=rv64imac/march=rv64ima/march=rv64imaf/march=rv64imafd/march=rv64imafc/march=rv64imafdc/march=rv64g/march=rv64gc mabi=ilp32/mabi=ilp32d/mabi=lp64/mabi=lp64d";
