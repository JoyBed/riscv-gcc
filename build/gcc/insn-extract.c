/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 843:  /* *local_pic_store_sfdf */
    case 842:  /* *local_pic_store_sfsf */
    case 841:  /* *local_pic_store_sfdf */
    case 840:  /* *local_pic_store_sfsf */
    case 835:  /* *local_pic_storedf */
    case 834:  /* *local_pic_storesf */
    case 833:  /* *local_pic_storedf */
    case 832:  /* *local_pic_storesf */
    case 831:  /* *local_pic_storedi */
    case 830:  /* *local_pic_storesi */
    case 829:  /* *local_pic_storehi */
    case 828:  /* *local_pic_storeqi */
    case 827:  /* *local_pic_storedi */
    case 826:  /* *local_pic_storesi */
    case 825:  /* *local_pic_storehi */
    case 824:  /* *local_pic_storeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 839:  /* *local_pic_store_32ddf */
    case 838:  /* *local_pic_store_32dsf */
    case 837:  /* *local_pic_store_32ddf */
    case 836:  /* *local_pic_store_32dsf */
    case 821:  /* *local_pic_load_32ddf */
    case 820:  /* *local_pic_load_32dsf */
    case 819:  /* *local_pic_load_32ddf */
    case 818:  /* *local_pic_load_32dsf */
    case 817:  /* *local_pic_loaddf */
    case 816:  /* *local_pic_loadsf */
    case 815:  /* *local_pic_loaddf */
    case 814:  /* *local_pic_loadsf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 791:  /* atomic_cas_value_strongdi */
    case 790:  /* atomic_cas_value_strongsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 789:  /* atomic_exchangedi */
    case 788:  /* atomic_exchangesi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 787:  /* atomic_fetch_anddi */
    case 786:  /* atomic_fetch_xordi */
    case 785:  /* atomic_fetch_ordi */
    case 784:  /* atomic_fetch_adddi */
    case 783:  /* atomic_fetch_andsi */
    case 782:  /* atomic_fetch_xorsi */
    case 781:  /* atomic_fetch_orsi */
    case 780:  /* atomic_fetch_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 779:  /* atomic_anddi */
    case 778:  /* atomic_xordi */
    case 777:  /* atomic_ordi */
    case 776:  /* atomic_adddi */
    case 775:  /* atomic_andsi */
    case 774:  /* atomic_xorsi */
    case 773:  /* atomic_orsi */
    case 772:  /* atomic_addsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 769:  /* mem_thread_fence_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 766:  /* stack_protect_set_di */
    case 765:  /* stack_protect_set_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 759:  /* fsri_rvp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 741:  /* vkdma_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0), 1), 0, 0));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 737:  /* wext64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 703:  /* zunpkd832_imp */
    case 702:  /* sunpkd832_imp */
    case 699:  /* zunpkd831_imp */
    case 698:  /* sunpkd831_imp */
    case 695:  /* zunpkd830_imp */
    case 694:  /* sunpkd830_imp */
    case 691:  /* zunpkd820_imp */
    case 690:  /* sunpkd820_imp */
    case 687:  /* zunpkd810_imp */
    case 686:  /* sunpkd810_imp */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 649:  /* umulx16 */
    case 648:  /* smulx16 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 637:  /* smslxda64 */
    case 635:  /* smslda64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 636:  /* smslxda1 */
    case 634:  /* smslda1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 631:  /* smulhisi3_highpart_64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 630:  /* smulhisi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 1), 0, 0));
      break;

    case 629:  /* smmulv2si3_round */
    case 627:  /* smmul_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0), 1), 0));
      break;

    case 615:  /* mulv2hiv2si3v */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 1));
      break;

    case 616:  /* mulsidi3v */
    case 614:  /* mulhisi3v */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      break;

    case 613:  /* sumaqav8qi */
    case 611:  /* umaqav8qi */
    case 610:  /* smaqav8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[5] = 3;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0), 0), 0);
      recog_data.dup_num[6] = 2;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[7] = 3;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 1), 0), 0);
      recog_data.dup_num[9] = 3;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[11] = 3;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[13] = 3;
      break;

    case 612:  /* sumaqav4qi */
    case 609:  /* umaqav4qi */
    case 608:  /* smaqav4qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 585:  /* umsubsidi4 */
    case 584:  /* msubsidi4 */
    case 583:  /* umaddsidi4 */
    case 582:  /* maddsidi4 */
    case 581:  /* usmsubsidi4 */
    case 580:  /* usmaddsidi4 */
    case 579:  /* ssmsubsidi4 */
    case 578:  /* ssmaddsidi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 577:  /* smaldrs64 */
    case 575:  /* smalds64 */
    case 573:  /* smalxds64 */
    case 572:  /* smalxda64 */
    case 569:  /* smalda64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0), 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 576:  /* smaldrs3_le */
    case 574:  /* smalds1_le */
    case 571:  /* smalxds1_le */
    case 570:  /* smalxda1_le */
    case 568:  /* smalda1_le */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 567:  /* smaddhidi64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0, 0));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 566:  /* smaddhidi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0, 0));
      break;

    case 565:  /* smal_64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 564:  /* smal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 509:  /* vec_mergev2si */
    case 508:  /* vec_mergev2hi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      break;

    case 645:  /* umul16 */
    case 644:  /* smul16 */
    case 499:  /* rvp_mulsidi3 */
    case 498:  /* rvp_umulsidi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 497:  /* msubr32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 496:  /* maddr32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 495:  /* kwmmul64_round */
    case 494:  /* kwmmul_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0), 1), 0), 0));
      break;

    case 493:  /* kwmmul_64 */
    case 492:  /* kwmmul */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      break;

    case 485:  /* kslrawu64 */
    case 483:  /* kslraw64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 481:  /* kslrav2si_round_internal */
    case 480:  /* kslrav4hi_round_internal */
    case 479:  /* kslrav8qi_round_internal */
    case 478:  /* kslrav2hi_round_internal */
    case 477:  /* kslrav4qi_round_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0), 1), 0), 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 1);
      recog_data.dup_num[4] = 3;
      break;

    case 476:  /* kslrav2si_internal */
    case 475:  /* kslrav4hi_internal */
    case 474:  /* kslrav8qi_internal */
    case 473:  /* kslrav2hi_internal */
    case 472:  /* kslrav4qi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 1);
      recog_data.dup_num[4] = 3;
      break;

    case 723:  /* vukmsr64 */
    case 639:  /* vumsr64 */
    case 638:  /* vsmsr64 */
    case 463:  /* vkmsr64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 633:  /* smmw64_round_internal */
    case 464:  /* kmmw64 */
    case 458:  /* kmmw64_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 0), 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 0), 1), 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 0), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 632:  /* smmw_round_internal */
    case 465:  /* kmmw2_internal */
    case 457:  /* kmmw2_round_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0), 1), 0), 1), 0, 0));
      break;

    case 452:  /* kmmaw64_round_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0, 0), 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0, 0), 1), 0), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0, 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0, 0), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 451:  /* kmmaw64_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1);
      recog_data.dup_num[2] = 6;
      break;

    case 450:  /* kmmaw_round_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 0), 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      break;

    case 449:  /* kmmaw_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      break;

    case 456:  /* kmmsb64_round */
    case 455:  /* kmmsb_round */
    case 448:  /* kmmac64_round */
    case 447:  /* kmmac_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0, 0), 1), 0));
      break;

    case 454:  /* kmmsb_64 */
    case 453:  /* kmmsb */
    case 446:  /* kmmac_64 */
    case 445:  /* kmmac */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0));
      break;

    case 749:  /* kmxda32 */
    case 748:  /* kmda32 */
    case 625:  /* smdrs32 */
    case 624:  /* smds32 */
    case 623:  /* smxds32 */
    case 622:  /* smxds64 */
    case 621:  /* smxdsv */
    case 620:  /* smdrs64 */
    case 619:  /* smdrs */
    case 618:  /* smds64 */
    case 617:  /* smds */
    case 444:  /* kmda64 */
    case 443:  /* kmxda64 */
    case 442:  /* kmxda */
    case 441:  /* kmda */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 754:  /* kmsxda32 */
    case 753:  /* kmsda32 */
    case 752:  /* kmaxds32 */
    case 751:  /* kmadrs32 */
    case 750:  /* kmads32 */
    case 747:  /* kmaxda32 */
    case 746:  /* kmada32 */
    case 722:  /* vukmar64 */
    case 587:  /* vumar64_1 */
    case 586:  /* vsmar64_1 */
    case 462:  /* kmsxda64 */
    case 461:  /* kmsxda */
    case 460:  /* kmsda64 */
    case 459:  /* kmsda */
    case 440:  /* vkmar64 */
    case 439:  /* kmaxds64 */
    case 438:  /* kmaxds */
    case 437:  /* kmadrs64 */
    case 436:  /* kmadrs */
    case 435:  /* kmads64 */
    case 434:  /* kmads */
    case 433:  /* kmaxda64 */
    case 432:  /* kmaxda */
    case 431:  /* kmada64 */
    case 430:  /* kmada */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 421:  /* kma64_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0, 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 745:  /* kma32_internal */
    case 420:  /* kma_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 419:  /* khmsi_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0), 1), 0, 0));
      break;

    case 418:  /* kdma_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 417:  /* kdm_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0, 0));
      break;

    case 734:  /* urstsav2si_le */
    case 733:  /* urstsav2hi_le */
    case 548:  /* rstsav2si_le */
    case 547:  /* rstsav2hi_le */
    case 413:  /* urcrsav2si_le */
    case 412:  /* urcrsav2hi_le */
    case 407:  /* rcrsav2si_le */
    case 406:  /* rcrsav2hi_le */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 735:  /* urstsa16_64_le */
    case 732:  /* urstas16_64_le */
    case 549:  /* rstsa16_64_le */
    case 546:  /* rstas16_64_le */
    case 414:  /* urcrsa16_64_le */
    case 411:  /* urcras16_64_le */
    case 408:  /* rcrsa16_64_le */
    case 405:  /* rcras16_64_le */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 731:  /* urstasv2si_le */
    case 730:  /* urstasv2hi_le */
    case 545:  /* rstasv2si_le */
    case 544:  /* rstasv2hi_le */
    case 410:  /* urcrasv2si_le */
    case 409:  /* urcrasv2hi_le */
    case 404:  /* rcrasv2si_le */
    case 403:  /* rcrasv2hi_le */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 728:  /* ukstsav2si_le */
    case 727:  /* ukstsav2hi_le */
    case 684:  /* stsav2si_le */
    case 683:  /* stsav2hi_le */
    case 490:  /* kstsav2si_le */
    case 489:  /* kstsav2hi_le */
    case 401:  /* ukcrsav2si_le */
    case 400:  /* ukcrsav2hi_le */
    case 395:  /* kcrsav2si_le */
    case 394:  /* kcrsav2hi_le */
    case 389:  /* crsav2si_le */
    case 388:  /* crsav2hi_le */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 729:  /* ukstsa16_64_le */
    case 726:  /* ukstas16_64_le */
    case 685:  /* stsa16_64_le */
    case 682:  /* stas16_64_le */
    case 491:  /* kstsa16_64_le */
    case 488:  /* kstas16_64_le */
    case 402:  /* ukcrsa16_64_le */
    case 399:  /* ukcras16_64_le */
    case 396:  /* kcrsa16_64_le */
    case 393:  /* kcras16_64_le */
    case 390:  /* crsa16_64_le */
    case 387:  /* cras16_64_le */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 725:  /* ukstasv2si_le */
    case 724:  /* ukstasv2hi_le */
    case 681:  /* stasv2si_le */
    case 680:  /* stasv2hi_le */
    case 487:  /* kstasv2si_le */
    case 486:  /* kstasv2hi_le */
    case 398:  /* ukcrasv2si_le */
    case 397:  /* ukcrasv2hi_le */
    case 392:  /* kcrasv2si_le */
    case 391:  /* kcrasv2hi_le */
    case 386:  /* crasv2si_le */
    case 385:  /* crasv2hi_le */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 721:  /* ucmpltv4hi */
    case 720:  /* ucmpltv8qi */
    case 719:  /* ucmpltv2hi */
    case 718:  /* ucmpltv4qi */
    case 717:  /* ucmplev4hi */
    case 716:  /* ucmplev8qi */
    case 715:  /* ucmplev2hi */
    case 714:  /* ucmplev4qi */
    case 679:  /* sraiu64 */
    case 678:  /* sraiu */
    case 676:  /* srl32_round */
    case 675:  /* srl16_roundv4hi */
    case 674:  /* srl16_roundv2hi */
    case 673:  /* srl8_roundv8qi */
    case 672:  /* srl8_roundv4qi */
    case 671:  /* sra32_round */
    case 670:  /* sra16_roundv4hi */
    case 669:  /* sra16_roundv2hi */
    case 668:  /* sra8_roundv8qi */
    case 667:  /* sra8_roundv4qi */
    case 563:  /* scmpltv4hi */
    case 562:  /* scmpltv8qi */
    case 561:  /* scmpltv2hi */
    case 560:  /* scmpltv4qi */
    case 559:  /* scmplev4hi */
    case 558:  /* scmplev8qi */
    case 557:  /* scmplev2hi */
    case 556:  /* scmplev4qi */
    case 384:  /* cmpeqv4hi */
    case 383:  /* cmpeqv8qi */
    case 382:  /* cmpeqv2hi */
    case 381:  /* cmpeqv4qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 366:  /* cmixdi */
    case 365:  /* cmixsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[0] = 3;
      break;

    case 362:  /* avedi */
    case 361:  /* ave */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 331:  /* *st64_rvp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 266:  /* stack_tiedi */
    case 265:  /* stack_tiesi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 543:  /* rdovdi */
    case 542:  /* rdovsi */
    case 307:  /* riscv_getnoise_di */
    case 306:  /* riscv_getnoise_si */
    case 305:  /* riscv_pollentropy_di */
    case 304:  /* riscv_pollentropy_si */
    case 260:  /* riscv_frflags */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 261:  /* riscv_fsflags */
    case 258:  /* gpr_restore */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 257:  /* gpr_save */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &PATTERN (insn));
      break;

    case 254:  /* call_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 253:  /* call_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 252:  /* sibcall_value_internal */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 251:  /* sibcall_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 249:  /* eh_set_lr_di */
    case 248:  /* eh_set_lr_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 259:  /* gpr_restore_return */
    case 247:  /* simple_return_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 244:  /* tablejumpdi */
    case 243:  /* tablejumpsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 242:  /* indirect_jumpdi */
    case 241:  /* indirect_jumpsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 240:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 768:  /* stack_protect_test_di */
    case 767:  /* stack_protect_test_si */
    case 209:  /* *fle_quietdfdi4_snan */
    case 208:  /* *flt_quietdfdi4_snan */
    case 207:  /* *fle_quietdfsi4_snan */
    case 206:  /* *flt_quietdfsi4_snan */
    case 205:  /* *fle_quietsfdi4_snan */
    case 204:  /* *flt_quietsfdi4_snan */
    case 203:  /* *fle_quietsfsi4_snan */
    case 202:  /* *flt_quietsfsi4_snan */
    case 201:  /* *fle_quietdfdi4_default */
    case 200:  /* *flt_quietdfdi4_default */
    case 199:  /* *fle_quietdfsi4_default */
    case 198:  /* *flt_quietdfsi4_default */
    case 197:  /* *fle_quietsfdi4_default */
    case 196:  /* *flt_quietsfdi4_default */
    case 195:  /* *fle_quietsfsi4_default */
    case 194:  /* *flt_quietsfsi4_default */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 193:  /* *cstoredfdi4 */
    case 192:  /* *cstoredfsi4 */
    case 191:  /* *cstoresfdi4 */
    case 190:  /* *cstoresfsi4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 189:  /* *branch_on_bit_rangedi */
    case 188:  /* *branch_on_bit_rangesi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 187:  /* *branch_on_bitdi */
    case 186:  /* *branch_on_bitsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 185:  /* *movdidicc */
    case 184:  /* *movsidicc */
    case 183:  /* *movsisicc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 182:  /* *branchdi */
    case 181:  /* *branchsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 180:  /* zero_extendsidi2_shifted */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 176:  /* *lshrsi3_extend_mask_1 */
    case 175:  /* *ashrsi3_extend_mask_1 */
    case 174:  /* *ashlsi3_extend_mask_1 */
    case 173:  /* *lshrsi3_extend_mask */
    case 172:  /* *ashrsi3_extend_mask */
    case 171:  /* *ashlsi3_extend_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 167:  /* *lshrdi3_mask_1 */
    case 166:  /* *ashrdi3_mask_1 */
    case 165:  /* *ashldi3_mask_1 */
    case 164:  /* *lshrdi3_mask */
    case 163:  /* *ashrdi3_mask */
    case 162:  /* *ashldi3_mask */
    case 158:  /* *lshrsi3_mask_1 */
    case 157:  /* *ashrsi3_mask_1 */
    case 156:  /* *ashlsi3_mask_1 */
    case 155:  /* *lshrsi3_mask */
    case 154:  /* *ashrsi3_mask */
    case 153:  /* *ashlsi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 368:  /* clrovdi */
    case 367:  /* clrovsi */
    case 264:  /* riscv_uret */
    case 263:  /* riscv_sret */
    case 262:  /* riscv_mret */
    case 256:  /* trap */
    case 255:  /* nop */
    case 250:  /* eh_return_internal */
    case 246:  /* simple_return */
    case 245:  /* blockage */
    case 149:  /* fence_i */
    case 148:  /* fence */
      break;

    case 764:  /* *movv2si_64bit */
    case 763:  /* *movv4hi_internal */
    case 762:  /* *movv8qi_internal */
    case 761:  /* *movv2hi_internal */
    case 760:  /* *movv4qi_internal */
    case 147:  /* *movdf_softfloat */
    case 146:  /* *movdf_hardfloat_rv64 */
    case 145:  /* *movdf_hardfloat_rv32 */
    case 144:  /* *movsf_softfloat */
    case 143:  /* *movsf_hardfloat */
    case 142:  /* *movqi_internal */
    case 137:  /* *movhi_internal */
    case 136:  /* *movsi_internal */
    case 135:  /* *movdi_64bit */
    case 134:  /* *movdi_32bit */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 758:  /* fsr_rvp */
    case 757:  /* fsrw */
    case 507:  /* pbsadadi */
    case 506:  /* pbsadasi */
    case 125:  /* tls_add_tp_ledi */
    case 124:  /* tls_add_tp_lesi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 756:  /* revdi_internal */
    case 755:  /* revsi_internal */
    case 707:  /* bswap8_64 */
    case 706:  /* bswap8 */
    case 308:  /* kabsw */
    case 299:  /* riscv_sm3p1_di */
    case 298:  /* riscv_sm3p1_si */
    case 297:  /* riscv_sm3p0_di */
    case 296:  /* riscv_sm3p0_si */
    case 295:  /* riscv_sha512sum1 */
    case 294:  /* riscv_sha512sum0 */
    case 293:  /* riscv_sha512sig1 */
    case 292:  /* riscv_sha512sig0 */
    case 285:  /* riscv_sha256sum1_di */
    case 284:  /* riscv_sha256sum1_si */
    case 283:  /* riscv_sha256sum0_di */
    case 282:  /* riscv_sha256sum0_si */
    case 281:  /* riscv_sha256sig1_di */
    case 280:  /* riscv_sha256sig1_si */
    case 279:  /* riscv_sha256sig0_di */
    case 278:  /* riscv_sha256sig0_si */
    case 275:  /* riscv_aes64im */
    case 129:  /* got_load_tls_iedi */
    case 128:  /* got_load_tls_iesi */
    case 127:  /* got_load_tls_gddi */
    case 126:  /* got_load_tls_gdsi */
    case 123:  /* got_loaddi */
    case 122:  /* got_loadsi */
    case 121:  /* lrounddfdi2 */
    case 120:  /* lrintdfdi2 */
    case 119:  /* lrounddfsi2 */
    case 118:  /* lrintdfsi2 */
    case 117:  /* lroundsfdi2 */
    case 116:  /* lrintsfdi2 */
    case 115:  /* lroundsfsi2 */
    case 114:  /* lrintsfsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 771:  /* atomic_storedi */
    case 770:  /* atomic_storesi */
    case 744:  /* khmtt16 */
    case 743:  /* khmbt16 */
    case 742:  /* khmbb16 */
    case 740:  /* kdmtt16 */
    case 739:  /* kdmbt16 */
    case 738:  /* kdmbb16 */
    case 713:  /* uclip32v2sidi */
    case 712:  /* uclip32sisi */
    case 711:  /* uclip16v4hi */
    case 710:  /* uclip16v2hi */
    case 709:  /* uclip8v8qi */
    case 708:  /* uclip8v4qi */
    case 677:  /* sraiw_u */
    case 651:  /* umulx16_64 */
    case 650:  /* smulx16_64 */
    case 647:  /* umul16_64 */
    case 646:  /* smul16_64 */
    case 643:  /* umulx8 */
    case 642:  /* umul8 */
    case 641:  /* smulx8 */
    case 640:  /* smul8 */
    case 555:  /* sclip32v2sidi */
    case 554:  /* sclip32sisi */
    case 553:  /* sclip16v4hi */
    case 552:  /* sclip16v2hi */
    case 551:  /* sclip8v8qi */
    case 550:  /* sclip8v4qi */
    case 505:  /* pbsaddi */
    case 504:  /* pbsadsi */
    case 484:  /* kslrawu */
    case 482:  /* kslraw */
    case 429:  /* khmx16v4hi */
    case 428:  /* khmx16v2hi */
    case 427:  /* khm16v4hi */
    case 426:  /* khm16v2hi */
    case 425:  /* khmx8v8qi */
    case 424:  /* khmx8v4qi */
    case 423:  /* khm8v8qi */
    case 422:  /* khm8v4qi */
    case 364:  /* bitrevdi */
    case 363:  /* bitrevsi */
    case 303:  /* riscv_sm4ks_di */
    case 302:  /* riscv_sm4ks_si */
    case 301:  /* riscv_sm4ed_di */
    case 300:  /* riscv_sm4ed_si */
    case 291:  /* riscv_sha512sum1r */
    case 290:  /* riscv_sha512sum0r */
    case 289:  /* riscv_sha512sig1l */
    case 288:  /* riscv_sha512sig1h */
    case 287:  /* riscv_sha512sig0l */
    case 286:  /* riscv_sha512sig0h */
    case 277:  /* riscv_aes64ks2 */
    case 276:  /* riscv_aes64ks1i */
    case 274:  /* riscv_aes64esm */
    case 273:  /* riscv_aes64es */
    case 272:  /* riscv_aes64dsm */
    case 271:  /* riscv_aes64ds */
    case 270:  /* riscv_aes32esmi */
    case 269:  /* riscv_aes32esi */
    case 268:  /* riscv_aes32dsmi */
    case 267:  /* riscv_aes32dsi */
    case 131:  /* auipcdi */
    case 130:  /* auipcsi */
    case 64:  /* copysigndf3 */
    case 63:  /* copysignsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 60:  /* *fnmadf4 */
    case 59:  /* *fnmasf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      break;

    case 58:  /* *fnmsdf4 */
    case 57:  /* *fnmssf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 56:  /* *fmsdf4 */
    case 55:  /* *fmssf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 54:  /* *fmadf4 */
    case 53:  /* *fmasf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      break;

    case 416:  /* vec_setv8qi_internal */
    case 415:  /* vec_setv4qi_internal */
    case 52:  /* fnmadf4 */
    case 51:  /* fnmasf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 50:  /* fnmsdf4 */
    case 49:  /* fnmssf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 48:  /* fmsdf4 */
    case 47:  /* fmssf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 178:  /* *lshrsi3_zero_extend_2 */
    case 46:  /* fmadf4 */
    case 45:  /* fmasf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 628:  /* smulv2si3_highpart */
    case 626:  /* smulsi3_highpart */
    case 541:  /* ursubsi3 */
    case 540:  /* uraddsi3 */
    case 539:  /* rsubsi3 */
    case 538:  /* raddsi3 */
    case 537:  /* ursubdi3 */
    case 536:  /* rsubdi3 */
    case 535:  /* ursubv2si3 */
    case 534:  /* ursubv4hi3 */
    case 533:  /* ursubv8qi3 */
    case 532:  /* ursubv2hi3 */
    case 531:  /* ursubv4qi3 */
    case 530:  /* rsubv2si3 */
    case 529:  /* rsubv4hi3 */
    case 528:  /* rsubv8qi3 */
    case 527:  /* rsubv2hi3 */
    case 526:  /* rsubv4qi3 */
    case 525:  /* uradddi3 */
    case 524:  /* uraddv2si3 */
    case 523:  /* uraddv4hi3 */
    case 522:  /* uraddv8qi3 */
    case 521:  /* uraddv2hi3 */
    case 520:  /* uraddv4qi3 */
    case 519:  /* radddi3 */
    case 518:  /* raddv2si3 */
    case 517:  /* raddv4hi3 */
    case 516:  /* raddv8qi3 */
    case 515:  /* raddv2hi3 */
    case 514:  /* raddv4qi3 */
    case 28:  /* usmulsi3_highpart */
    case 27:  /* umulsi3_highpart */
    case 26:  /* mulsi3_highpart */
    case 25:  /* usmuldi3_highpart */
    case 24:  /* umuldi3_highpart */
    case 23:  /* muldi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 16:  /* *negsi2_extended2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 813:  /* *local_pic_load_usi */
    case 812:  /* *local_pic_load_usi */
    case 811:  /* *local_pic_load_usi */
    case 810:  /* *local_pic_load_uhi */
    case 809:  /* *local_pic_load_uhi */
    case 808:  /* *local_pic_load_uhi */
    case 807:  /* *local_pic_load_uqi */
    case 806:  /* *local_pic_load_uqi */
    case 805:  /* *local_pic_load_uqi */
    case 804:  /* *local_pic_load_ssi */
    case 803:  /* *local_pic_load_ssi */
    case 802:  /* *local_pic_load_ssi */
    case 801:  /* *local_pic_load_shi */
    case 800:  /* *local_pic_load_shi */
    case 799:  /* *local_pic_load_shi */
    case 798:  /* *local_pic_load_sqi */
    case 797:  /* *local_pic_load_sqi */
    case 796:  /* *local_pic_load_sqi */
    case 705:  /* zunpkd832_64 */
    case 704:  /* sunpkd832_64 */
    case 701:  /* zunpkd831_64 */
    case 700:  /* sunpkd831_64 */
    case 697:  /* zunpkd830_64 */
    case 696:  /* sunpkd830_64 */
    case 693:  /* zunpkd820_64 */
    case 692:  /* sunpkd820_64 */
    case 689:  /* zunpkd810_64 */
    case 688:  /* sunpkd810_64 */
    case 15:  /* *negsi2_extended */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 823:  /* *local_pic_load_sfdf */
    case 822:  /* *local_pic_load_sfsf */
    case 795:  /* *local_pic_loaddi */
    case 794:  /* *local_pic_loadsi */
    case 793:  /* *local_pic_loadhi */
    case 792:  /* *local_pic_loadqi */
    case 380:  /* clzsi2 */
    case 379:  /* clrsbsi2 */
    case 378:  /* clzv2si2 */
    case 377:  /* clrsbv2si2 */
    case 376:  /* clzv4hi2 */
    case 375:  /* clrsbv4hi2 */
    case 374:  /* clzv8qi2 */
    case 373:  /* clrsbv8qi2 */
    case 372:  /* clzv2hi2 */
    case 371:  /* clrsbv2hi2 */
    case 370:  /* clzv4qi2 */
    case 369:  /* clrsbv4qi2 */
    case 333:  /* *st64_rvp_base */
    case 332:  /* *ld64_rvp_base */
    case 313:  /* kabsv2si2 */
    case 312:  /* kabsv4hi2 */
    case 311:  /* kabsv8qi2 */
    case 310:  /* kabsv2hi2 */
    case 309:  /* kabsv4qi2 */
    case 227:  /* *sgeu_didi */
    case 226:  /* *sge_didi */
    case 225:  /* *sgeu_disi */
    case 224:  /* *sge_disi */
    case 223:  /* *sgeu_sisi */
    case 222:  /* *sge_sisi */
    case 215:  /* *sne_zero_didi */
    case 214:  /* *sne_zero_disi */
    case 213:  /* *sne_zero_sisi */
    case 212:  /* *seq_zero_didi */
    case 211:  /* *seq_zero_disi */
    case 210:  /* *seq_zero_sisi */
    case 179:  /* *lshrsi3_zero_extend_3 */
    case 113:  /* floatunsdidf2 */
    case 112:  /* floatunssidf2 */
    case 111:  /* floatunsdisf2 */
    case 110:  /* floatunssisf2 */
    case 109:  /* floatdidf2 */
    case 108:  /* floatsidf2 */
    case 107:  /* floatdisf2 */
    case 106:  /* floatsisf2 */
    case 105:  /* fixuns_truncdfdi2 */
    case 104:  /* fixuns_truncdfsi2 */
    case 103:  /* fixuns_truncsfdi2 */
    case 102:  /* fixuns_truncsfsi2 */
    case 101:  /* fix_truncdfdi2 */
    case 100:  /* fix_truncdfsi2 */
    case 99:  /* fix_truncsfdi2 */
    case 98:  /* fix_truncsfsi2 */
    case 97:  /* extendsfdf2 */
    case 96:  /* extendhidi2 */
    case 95:  /* extendhisi2 */
    case 94:  /* extendhihi2 */
    case 93:  /* extendqidi2 */
    case 92:  /* extendqisi2 */
    case 91:  /* extendqihi2 */
    case 90:  /* extendsidi2 */
    case 89:  /* zero_extendqidi2 */
    case 88:  /* zero_extendqisi2 */
    case 87:  /* zero_extendqihi2 */
    case 86:  /* zero_extendhidi2 */
    case 85:  /* zero_extendhisi2 */
    case 84:  /* zero_extendsidi2 */
    case 83:  /* truncdfsf2 */
    case 82:  /* *one_cmplsi2_internal */
    case 81:  /* one_cmpldi2 */
    case 80:  /* one_cmplsi2 */
    case 66:  /* negdf2 */
    case 65:  /* negsf2 */
    case 62:  /* absdf2 */
    case 61:  /* abssf2 */
    case 44:  /* sqrtdf2 */
    case 43:  /* sqrtsf2 */
    case 14:  /* negsi2 */
    case 13:  /* negdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 22:  /* *mulsi3_extended2 */
    case 12:  /* *subsi3_extended2 */
    case 6:  /* *addsi3_extended2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 736:  /* wext */
    case 513:  /* vec_pktb64 */
    case 512:  /* vec_pktt64 */
    case 511:  /* vec_pkbt64 */
    case 510:  /* vec_pkbb64 */
    case 330:  /* *ld64_rvp */
    case 177:  /* *lshrsi3_zero_extend_1 */
    case 170:  /* *lshrsi3_extend */
    case 169:  /* *ashrsi3_extend */
    case 168:  /* *ashlsi3_extend */
    case 40:  /* *umodsi3_extended */
    case 39:  /* *modsi3_extended */
    case 38:  /* *udivsi3_extended */
    case 37:  /* *divsi3_extended */
    case 21:  /* *mulsi3_extended */
    case 11:  /* *subsi3_extended */
    case 5:  /* *addsi3_extended */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 666:  /* *riscv_ashlv8qi3 */
    case 665:  /* *riscv_ashlv4qi3 */
    case 664:  /* *riscv_lshrv8qi3 */
    case 663:  /* *riscv_lshrv4qi3 */
    case 662:  /* *riscv_ashrv8qi3 */
    case 661:  /* *riscv_ashrv4qi3 */
    case 660:  /* *riscv_ashrv4hi3 */
    case 659:  /* *riscv_ashrv2hi3 */
    case 658:  /* *riscv_ashlv4hi3 */
    case 657:  /* *riscv_ashlv2hi3 */
    case 656:  /* *riscv_lshrv4hi3 */
    case 655:  /* *riscv_lshrv2hi3 */
    case 654:  /* lshrv2si3 */
    case 653:  /* ashrv2si3 */
    case 652:  /* ashlv2si3 */
    case 607:  /* uminv2si3 */
    case 606:  /* sminv2si3 */
    case 605:  /* uminv4hi3 */
    case 604:  /* sminv4hi3 */
    case 603:  /* uminv8qi3 */
    case 602:  /* sminv8qi3 */
    case 601:  /* uminv2hi3 */
    case 600:  /* sminv2hi3 */
    case 599:  /* uminv4qi3 */
    case 598:  /* sminv4qi3 */
    case 597:  /* umaxv2si3 */
    case 596:  /* smaxv2si3 */
    case 595:  /* umaxv4hi3 */
    case 594:  /* smaxv4hi3 */
    case 593:  /* umaxv8qi3 */
    case 592:  /* smaxv8qi3 */
    case 591:  /* umaxv2hi3 */
    case 590:  /* smaxv2hi3 */
    case 589:  /* umaxv4qi3 */
    case 588:  /* smaxv4qi3 */
    case 503:  /* smindi3 */
    case 502:  /* sminsi3 */
    case 501:  /* smaxdi3 */
    case 500:  /* smaxsi3 */
    case 471:  /* ksll32 */
    case 470:  /* kslli16v4hi */
    case 469:  /* kslli16v2hi */
    case 468:  /* kslli8v8qidi */
    case 467:  /* kslli8v4qisi */
    case 466:  /* ksll */
    case 360:  /* ussubsi3 */
    case 359:  /* sssubsi3 */
    case 358:  /* usaddsi3 */
    case 357:  /* ssaddsi3 */
    case 356:  /* ussubhi3 */
    case 355:  /* sssubhi3 */
    case 354:  /* usaddhi3 */
    case 353:  /* ssaddhi3 */
    case 352:  /* rvp_uksubdi3 */
    case 351:  /* rvp_ksubdi3 */
    case 350:  /* uksubv2si3 */
    case 349:  /* ksubv2si3 */
    case 348:  /* subv2si3 */
    case 347:  /* uksubv4hi3 */
    case 346:  /* ksubv4hi3 */
    case 345:  /* subv4hi3 */
    case 344:  /* uksubv8qi3 */
    case 343:  /* ksubv8qi3 */
    case 342:  /* subv8qi3 */
    case 341:  /* uksubv2hi3 */
    case 340:  /* ksubv2hi3 */
    case 339:  /* subv2hi3 */
    case 338:  /* uksubv4qi3 */
    case 337:  /* ksubv4qi3 */
    case 336:  /* subv4qi3 */
    case 335:  /* rvp_ukadddi3 */
    case 334:  /* rvp_kadddi3 */
    case 329:  /* *add64_rvp */
    case 328:  /* ukaddv2si3 */
    case 327:  /* kaddv2si3 */
    case 326:  /* addv2si3 */
    case 325:  /* ukaddv4hi3 */
    case 324:  /* kaddv4hi3 */
    case 323:  /* addv4hi3 */
    case 322:  /* ukaddv8qi3 */
    case 321:  /* kaddv8qi3 */
    case 320:  /* addv8qi3 */
    case 319:  /* ukaddv2hi3 */
    case 318:  /* kaddv2hi3 */
    case 317:  /* addv2hi3 */
    case 316:  /* ukaddv4qi3 */
    case 315:  /* kaddv4qi3 */
    case 314:  /* addv4qi3 */
    case 239:  /* *sleu_didi */
    case 238:  /* *sle_didi */
    case 237:  /* *sleu_disi */
    case 236:  /* *sle_disi */
    case 235:  /* *sleu_sisi */
    case 234:  /* *sle_sisi */
    case 233:  /* *sltu_didi */
    case 232:  /* *slt_didi */
    case 231:  /* *sltu_disi */
    case 230:  /* *slt_disi */
    case 229:  /* *sltu_sisi */
    case 228:  /* *slt_sisi */
    case 221:  /* *sgtu_didi */
    case 220:  /* *sgt_didi */
    case 219:  /* *sgtu_disi */
    case 218:  /* *sgt_disi */
    case 217:  /* *sgtu_sisi */
    case 216:  /* *sgt_sisi */
    case 161:  /* lshrdi3 */
    case 160:  /* ashrdi3 */
    case 159:  /* ashldi3 */
    case 152:  /* lshrsi3 */
    case 151:  /* ashrsi3 */
    case 150:  /* ashlsi3 */
    case 141:  /* *xorsihi3 */
    case 140:  /* *xorhihi3 */
    case 139:  /* *addsihi3 */
    case 138:  /* *addhihi3 */
    case 133:  /* *lowdi */
    case 132:  /* *lowsi */
    case 79:  /* *xorsi3_internal */
    case 78:  /* *iorsi3_internal */
    case 77:  /* *andsi3_internal */
    case 76:  /* xordi3 */
    case 75:  /* iordi3 */
    case 74:  /* anddi3 */
    case 73:  /* xorsi3 */
    case 72:  /* iorsi3 */
    case 71:  /* andsi3 */
    case 70:  /* smaxdf3 */
    case 69:  /* smaxsf3 */
    case 68:  /* smindf3 */
    case 67:  /* sminsf3 */
    case 42:  /* divdf3 */
    case 41:  /* divsf3 */
    case 36:  /* umoddi3 */
    case 35:  /* moddi3 */
    case 34:  /* udivdi3 */
    case 33:  /* divdi3 */
    case 32:  /* umodsi3 */
    case 31:  /* modsi3 */
    case 30:  /* udivsi3 */
    case 29:  /* divsi3 */
    case 20:  /* muldi3 */
    case 19:  /* mulsi3 */
    case 18:  /* muldf3 */
    case 17:  /* mulsf3 */
    case 10:  /* subsi3 */
    case 9:  /* subdi3 */
    case 8:  /* subdf3 */
    case 7:  /* subsf3 */
    case 4:  /* *adddi_rv64 */
    case 3:  /* addsi3 */
    case 2:  /* adddf3 */
    case 1:  /* addsf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
