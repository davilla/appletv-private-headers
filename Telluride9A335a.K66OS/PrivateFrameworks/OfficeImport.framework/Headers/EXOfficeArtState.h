/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OAXDrawingState.h"

@class EXState;

__attribute__((visibility("hidden")))
@interface EXOfficeArtState : OAXDrawingState {
@private
	EXState *mExcelState;	// 60 = 0x3c
}
- (id)initWithExcelState:(id)excelState;	// 0x352c7385
- (id)excelState;	// 0x35305cd1
@end

