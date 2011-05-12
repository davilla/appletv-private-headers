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
+ (id)masterLayoutMap;	// 0x344a7ed5
- (id)init;	// 0x344a7f11
- (id)allMasterIds;	// 0x344abe1d
- (void)dealloc;	// 0x344600d1
- (long)masterIdForTitleId:(long)titleId;	// 0x344aada5
- (id)masterInfoForMasterId:(long)masterId;	// 0x3443a131
- (id)masterInfoForSlideHolder:(id)slideHolder;	// 0x3443a021
- (void)setMasterId:(long)anId forTitleId:(long)titleId;	// 0x344aa86d
- (void)setMasterInfo:(id)info forMasterId:(long)masterId;	// 0x344a88a5
- (id)slideLayoutForSlideHolder:(id)slideHolder;	// 0x34439ff9
@end

