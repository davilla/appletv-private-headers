/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class ESDContainer, ESDObject;

__attribute__((visibility("hidden")))
@interface PptHyperlinkBlock : NSObject {
@private
	ESDContainer *mInteractiveInfoContainerHolder;	// 4 = 0x4
	ESDObject *mTxInteractiveInfoAtomHolder;	// 8 = 0x8
}
@property(retain) id interactiveInfoContainerHolder;	// G=0x3445cd7d; S=0x3445cd21; converted property
// converted property getter: - (id)interactiveInfoContainerHolder;	// 0x3445cd7d
// converted property setter: - (void)setInteractiveInfoContainerHolder:(id)holder;	// 0x3445cd21
- (void)setTxInteractiveInfoAtomHolder:(id)holder;	// 0x3445cd31
- (PptTxInteracInfoAtom *)txtInteractiveInfoAtom;	// 0x3445cd41
@end

