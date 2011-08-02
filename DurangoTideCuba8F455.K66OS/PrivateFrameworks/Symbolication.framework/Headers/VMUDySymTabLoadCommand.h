/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"


@interface VMUDySymTabLoadCommand : VMULoadCommand {
	unsigned _ilocalsym;	// 16 = 0x10
	unsigned _nlocalsym;	// 20 = 0x14
	unsigned _iextdefsym;	// 24 = 0x18
	unsigned _nextdefsym;	// 28 = 0x1c
	unsigned _iundefsym;	// 32 = 0x20
	unsigned _nundefsym;	// 36 = 0x24
	unsigned _tocoff;	// 40 = 0x28
	unsigned _ntoc;	// 44 = 0x2c
	unsigned _modtaboff;	// 48 = 0x30
	unsigned _nmodtab;	// 52 = 0x34
	unsigned _extrefsymoff;	// 56 = 0x38
	unsigned _nextrefsyms;	// 60 = 0x3c
	unsigned _indirectsymoff;	// 64 = 0x40
	unsigned _nindirectsyms;	// 68 = 0x44
	unsigned _extreloff;	// 72 = 0x48
	unsigned _nextrel;	// 76 = 0x4c
	unsigned _locreloff;	// 80 = 0x50
	unsigned _nlocrel;	// 84 = 0x54
}
@property(readonly, assign) unsigned indirectsymoff;	// G=0x34120af1; converted property
@property(readonly, assign) unsigned nindirectsyms;	// G=0x34120b01; converted property
- (id)initWithMemory:(id)memory;	// 0x34120b11
// converted property getter: - (unsigned)indirectsymoff;	// 0x34120af1
- (BOOL)isDySymTab;	// 0x34120aed
// converted property getter: - (unsigned)nindirectsyms;	// 0x34120b01
@end

