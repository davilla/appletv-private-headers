/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSNumber;

@interface SSApplicationUserReview : NSObject {
@private
	NSString *_applicationPath;	// 4 = 0x4
	NSNumber *_itemIdentifier;	// 8 = 0x8
	float _userRating;	// 12 = 0xc
	NSNumber *_versionIdentifier;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *applicationPath;	// G=0x341e4c11; @synthesize=_applicationPath
@property(assign, nonatomic) float userRating;	// G=0x341e4c21; S=0x341e4c31; @synthesize=_userRating
@property(readonly, assign, nonatomic, getter=isValidReview) BOOL validReview;	// G=0x341e4999; 
- (id)init;	// 0x341e48a9
- (id)initForApplicationWithPath:(id)path;	// 0x341e48bd
- (void)_loadApplicationMetadata;	// 0x341e4afd
// declared property getter: - (id)applicationPath;	// 0x341e4c11
- (void)dealloc;	// 0x341e4925
// declared property getter: - (BOOL)isValidReview;	// 0x341e4999
- (BOOL)scheduleReview;	// 0x341e49b1
// declared property setter: - (void)setUserRating:(float)rating;	// 0x341e4c31
// declared property getter: - (float)userRating;	// 0x341e4c21
@end
