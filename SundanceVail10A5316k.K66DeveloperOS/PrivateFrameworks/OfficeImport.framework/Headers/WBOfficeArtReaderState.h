/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OABReaderState.h"

@class WBReader;

__attribute__((visibility("hidden")))
@interface WBOfficeArtReaderState : OABReaderState {
@private
	WBReader *mReader;	// 24 = 0x18
	int mCurrentTextType;	// 28 = 0x1c
}
@property(assign, nonatomic) int currentTextType;	// G=0x3112a4c9; S=0x3112a2ed; @synthesize=mCurrentTextType
@property(assign, nonatomic) WBReader *reader;	// G=0x3112a9d1; S=0x3111d251; @synthesize=mReader
- (id)initWithClient:(Class)client;	// 0x3111d211
// declared property getter: - (int)currentTextType;	// 0x3112a4c9
// declared property getter: - (id)reader;	// 0x3112a9d1
// declared property setter: - (void)setCurrentTextType:(int)type;	// 0x3112a2ed
// declared property setter: - (void)setReader:(id)reader;	// 0x3111d251
@end

