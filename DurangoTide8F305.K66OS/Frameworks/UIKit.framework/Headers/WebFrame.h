/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <WebFrame.h> // Unknown library


@interface WebFrame (BrowserAdditions)
- (void)_collectFormFieldElementsIntoArray:(id)array upToLimit:(unsigned)limit onlyIncludeFocusedElements:(BOOL)elements;	// 0x321b5365
- (id)_topFrame;	// 0x321b5541
- (id)allFormFields;	// 0x321b5325
- (BOOL)containsAnyFocusedFormFields;	// 0x321b5275
- (BOOL)containsAnyFormFields;	// 0x321b52cd
- (BOOL)isMainFrame;	// 0x31ffc26d
- (BOOL)isOrphaned;	// 0x321b5249
@end

@interface WebFrame (UIWebDocumentViewTextSelecting)
- (BOOL)isTexty;	// 0x321c4fd5
@end

@interface WebFrame (UIWebSelectionAdditions)
- (BOOL)containsOnlySelectableElements;	// 0x321da5dd
@end

