/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_VIDEODEV2_EXYNOS_MEDIA_EXT_H
#define __LINUX_VIDEODEV2_EXYNOS_MEDIA_EXT_H
#define V4L2_CID_MPEG_VIDEO_VBV_DELAY (V4L2_CID_MPEG_MFC_BASE + 26)
#define V4L2_CID_MPEG_VIDEO_H264_SEI_FRAME_PACKING   (V4L2_CID_MPEG_MFC_BASE + 27)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define V4L2_CID_MPEG_VIDEO_H264_SEI_FP_CURRENT_FRAME_0   (V4L2_CID_MPEG_MFC_BASE + 28)
#define V4L2_CID_MPEG_VIDEO_H264_SEI_FP_ARRANGEMENT_TYPE   (V4L2_CID_MPEG_MFC_BASE + 29)
enum v4l2_mpeg_video_h264_sei_fp_arrangement_type {
 V4L2_MPEG_VIDEO_H264_SEI_FP_TYPE_CHEKERBOARD = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MPEG_VIDEO_H264_SEI_FP_TYPE_COLUMN = 1,
 V4L2_MPEG_VIDEO_H264_SEI_FP_TYPE_ROW = 2,
 V4L2_MPEG_VIDEO_H264_SEI_FP_TYPE_SIDE_BY_SIDE = 3,
 V4L2_MPEG_VIDEO_H264_SEI_FP_TYPE_TOP_BOTTOM = 4,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MPEG_VIDEO_H264_SEI_FP_TYPE_TEMPORAL = 5,
};
#define V4L2_CID_MPEG_VIDEO_H264_FMO   (V4L2_CID_MPEG_MFC_BASE + 30)
#define V4L2_CID_MPEG_VIDEO_H264_FMO_MAP_TYPE   (V4L2_CID_MPEG_MFC_BASE + 31)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum v4l2_mpeg_video_h264_fmo_map_type {
 V4L2_MPEG_VIDEO_H264_FMO_MAP_TYPE_INTERLEAVED_SLICES = 0,
 V4L2_MPEG_VIDEO_H264_FMO_MAP_TYPE_SCATTERED_SLICES = 1,
 V4L2_MPEG_VIDEO_H264_FMO_MAP_TYPE_FOREGROUND_WITH_LEFT_OVER = 2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MPEG_VIDEO_H264_FMO_MAP_TYPE_BOX_OUT = 3,
 V4L2_MPEG_VIDEO_H264_FMO_MAP_TYPE_RASTER_SCAN = 4,
 V4L2_MPEG_VIDEO_H264_FMO_MAP_TYPE_WIPE_SCAN = 5,
 V4L2_MPEG_VIDEO_H264_FMO_MAP_TYPE_EXPLICIT = 6,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define V4L2_CID_MPEG_VIDEO_H264_FMO_SLICE_GROUP   (V4L2_CID_MPEG_MFC_BASE + 32)
#define V4L2_CID_MPEG_VIDEO_H264_FMO_CHANGE_DIRECTION   (V4L2_CID_MPEG_MFC_BASE + 33)
enum v4l2_mpeg_video_h264_fmo_change_dir {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 V4L2_MPEG_VIDEO_H264_FMO_CHANGE_DIR_RIGHT = 0,
 V4L2_MPEG_VIDEO_H264_FMO_CHANGE_DIR_LEFT = 1,
};
#define V4L2_CID_MPEG_VIDEO_H264_FMO_CHANGE_RATE   (V4L2_CID_MPEG_MFC_BASE + 34)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define V4L2_CID_MPEG_VIDEO_H264_FMO_RUN_LENGTH   (V4L2_CID_MPEG_MFC_BASE + 35)
#define V4L2_CID_MPEG_VIDEO_H264_ASO   (V4L2_CID_MPEG_MFC_BASE + 36)
#define V4L2_CID_MPEG_VIDEO_H264_ASO_SLICE_ORDER   (V4L2_CID_MPEG_MFC_BASE + 37)
#define V4L2_CID_MPEG_VIDEO_H264_HIERARCHICAL_CODING   (V4L2_CID_MPEG_MFC_BASE + 38)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define V4L2_CID_MPEG_VIDEO_H264_HIERARCHICAL_CODING_TYPE   (V4L2_CID_MPEG_MFC_BASE + 39)
enum v4l2_mpeg_video_h264_hierarchical_coding_type {
 V4L2_MPEG_VIDEO_H264_HIERARCHICAL_CODING_B = 0,
 V4L2_MPEG_VIDEO_H264_HIERARCHICAL_CODING_P = 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define V4L2_CID_MPEG_VIDEO_H264_HIERARCHICAL_CODING_LAYER   (V4L2_CID_MPEG_MFC_BASE + 40)
#define V4L2_CID_MPEG_VIDEO_H264_HIERARCHICAL_CODING_LAYER_QP   (V4L2_CID_MPEG_MFC_BASE + 41)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
