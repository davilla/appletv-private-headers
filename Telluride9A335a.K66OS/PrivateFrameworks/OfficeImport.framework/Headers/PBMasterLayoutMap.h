/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PBMasterLayoutMap : NSObject {
@private
	NSMutableDictionary *mMasterIdToMasterInfoMap;	// 4 = 0x4
	NSMutableDictionary *mTitleIdToMasterIdInfoMap;	// 8 = 0x8
}
+ (id)masterLayoutMap;	// 0x351e4de9
- (id)init;	// 0x351e4e2d
- (id)allMasterIds;	// 0x351ea6d5
- (void)dealloc;	// 0x351b4a45
- (long)masterIdForTitleId:(long)titleId;	// 0x351e93dd
- (id)masterInfoForMasterId:(long)masterId;	// 0x3512f0f1
- (id)masterInfoForSlideHolder:(id)slideHolder;	// 0x3512efcd
- (void)setMasterId:(long)anId forTitleId:(long)titleId;	// 0x351e9291
- (void)setMasterInfo:(id)info forMasterId:(long)masterId;	// 0x351e5825
- (id)slideLayoutForSlideHolder:(id)slideHolder;	// 0x3512efa1
@end

