/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSError, NSArray;

@interface SSSoftwareUpdatesResponse : NSObject {
@private
	NSError *_error;	// 4 = 0x4
	BOOL _failed;	// 8 = 0x8
	NSArray *_updateItems;	// 12 = 0xc
}
@property(readonly, assign) NSError *error;	// G=0x30eb85e1; 
@property(readonly, assign, getter=isFailed) BOOL failed;	// G=0x30eb8619; 
@property(readonly, assign) NSArray *updateItems;	// G=0x30eb8629; 
- (id)initWithDictionaryResponse:(id)dictionaryResponse;	// 0x30eb837d
- (id)initWithError:(id)error;	// 0x30eb8319
- (id)copyUpdateItemDictionaries;	// 0x30eb8739
- (void)dealloc;	// 0x30eb8581
- (id)description;	// 0x30eb8661
// declared property getter: - (id)error;	// 0x30eb85e1
// declared property getter: - (BOOL)isFailed;	// 0x30eb8619
// declared property getter: - (id)updateItems;	// 0x30eb8629
@end

