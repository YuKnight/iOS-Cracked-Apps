//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCESyncTaskRequest : JceObjectV2
{
    int jcev2_p_0_r_iTaskId;
    int jcev2_p_2_o_iExt;
    int jcev2_p_3_o_taskType;
    NSString *jcev2_p_1_o_strExt;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_taskType, setter=setJce_taskType:) int jcev2_p_3_o_taskType; // @synthesize jcev2_p_3_o_taskType;
@property(nonatomic, getter=jce_iExt, setter=setJce_iExt:) int jcev2_p_2_o_iExt; // @synthesize jcev2_p_2_o_iExt;
@property(retain, nonatomic, getter=jce_strExt, setter=setJce_strExt:) NSString *jcev2_p_1_o_strExt; // @synthesize jcev2_p_1_o_strExt;
@property(nonatomic, getter=jce_iTaskId, setter=setJce_iTaskId:) int jcev2_p_0_r_iTaskId; // @synthesize jcev2_p_0_r_iTaskId;
- (void).cxx_destruct;
- (id)init;

@end
