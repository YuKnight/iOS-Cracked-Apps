//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEVideoSplitGif;

@interface QLJCEVideoSplitResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    NSString *jcev2_p_1_r_msg;
    NSString *jcev2_p_2_r_vid;
    NSString *jcev2_p_3_r_h5Url;
    NSString *jcev2_p_4_r_imageUrl;
    long long jcev2_p_5_r_time;
    NSString *jcev2_p_6_o_playUrl;
    NSString *jcev2_p_7_o_description;
    NSString *jcev2_p_8_o_title;
    NSString *jcev2_p_9_o_subtitle;
    NSString *jcev2_p_10_o_reportParams;
    QLJCEVideoSplitGif *jcev2_p_11_o_gifInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_gifInfo, setter=setJce_gifInfo:) QLJCEVideoSplitGif *jcev2_p_11_o_gifInfo; // @synthesize jcev2_p_11_o_gifInfo;
@property(retain, nonatomic, getter=jce_reportParams, setter=setJce_reportParams:) NSString *jcev2_p_10_o_reportParams; // @synthesize jcev2_p_10_o_reportParams;
@property(retain, nonatomic, getter=jce_subtitle, setter=setJce_subtitle:) NSString *jcev2_p_9_o_subtitle; // @synthesize jcev2_p_9_o_subtitle;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_8_o_title; // @synthesize jcev2_p_8_o_title;
@property(retain, nonatomic, getter=jce_description, setter=setJce_description:) NSString *jcev2_p_7_o_description; // @synthesize jcev2_p_7_o_description;
@property(retain, nonatomic, getter=jce_playUrl, setter=setJce_playUrl:) NSString *jcev2_p_6_o_playUrl; // @synthesize jcev2_p_6_o_playUrl;
@property(nonatomic, getter=jce_time, setter=setJce_time:) long long jcev2_p_5_r_time; // @synthesize jcev2_p_5_r_time;
@property(retain, nonatomic, getter=jce_imageUrl, setter=setJce_imageUrl:) NSString *jcev2_p_4_r_imageUrl; // @synthesize jcev2_p_4_r_imageUrl;
@property(retain, nonatomic, getter=jce_h5Url, setter=setJce_h5Url:) NSString *jcev2_p_3_r_h5Url; // @synthesize jcev2_p_3_r_h5Url;
@property(retain, nonatomic, getter=jce_vid, setter=setJce_vid:) NSString *jcev2_p_2_r_vid; // @synthesize jcev2_p_2_r_vid;
@property(retain, nonatomic, getter=jce_msg, setter=setJce_msg:) NSString *jcev2_p_1_r_msg; // @synthesize jcev2_p_1_r_msg;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end
