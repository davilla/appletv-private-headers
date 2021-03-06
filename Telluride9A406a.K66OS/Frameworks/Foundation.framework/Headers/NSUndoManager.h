/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSArray;

@interface NSUndoManager : NSObject {
@private
	id _undoStack;	// 4 = 0x4
	id _redoStack;	// 8 = 0x8
	NSArray *_runLoopModes;	// 12 = 0xc
	unsigned long long _NSUndoManagerPrivate1;	// 16 = 0x10
	id _target;	// 24 = 0x18
	id _proxy;	// 28 = 0x1c
	void *_NSUndoManagerPrivate2;	// 32 = 0x20
	void *_NSUndoManagerPrivate3;	// 36 = 0x24
}
@property(assign) BOOL groupsByEvent;	// G=0x35e1686d; S=0x35ea3129; converted property
@property(assign) unsigned levelsOfUndo;	// G=0x35ea3179; S=0x35ea3159; converted property
@property(retain) NSArray *runLoopModes;	// G=0x35e1658d; S=0x35ea3199; converted property
+ (void)_endTopLevelGroupings;	// 0x35ea2c95
+ (void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(BOOL)iterations;	// 0x35ea2c85
- (id)init;	// 0x35e149e5
- (void)_cancelAutomaticTopLevelGroupEnding;	// 0x35ea2fb1
- (void)_commitUndoGrouping;	// 0x35ea2de5
- (void)_delayAutomaticTermination:(double)termination;	// 0x35e14d05
- (BOOL)_endUndoGroupRemovingIfEmpty:(BOOL)empty;	// 0x35e16c5d
- (void)_forwardTargetInvocation:(id)invocation;	// 0x35ea3919
- (id)_methodSignatureForTargetSelector:(SEL)targetSelector;	// 0x35ea38c5
- (void)_postCheckpointNotification;	// 0x35e16ed5
- (void)_prepareEventGrouping;	// 0x35e16401
- (void)_processEndOfEventNotification:(id)eventNotification;	// 0x35e16be5
- (void)_registerUndoObject:(id)object;	// 0x35e162a5
- (void)_rollbackUndoGrouping;	// 0x35ea2e15
- (void)_scheduleAutomaticTopLevelGroupEnding;	// 0x35e1648d
- (void)_setGroupIdentifier:(id)identifier;	// 0x35e16895
- (BOOL)_shouldCoalesceTypingForText:(id)text :(id)arg2;	// 0x35ea2bb5
- (id)_undoStack;	// 0x35ea2ba5
- (void)beginUndoGrouping;	// 0x35e1659d
- (BOOL)canRedo;	// 0x35ea3821
- (BOOL)canUndo;	// 0x35e21401
- (void)dealloc;	// 0x35e1d8a9
- (void)disableUndoRegistration;	// 0x35ea3051
- (void)enableUndoRegistration;	// 0x35ea3071
- (void)endUndoGrouping;	// 0x35e16c2d
- (void)finalize;	// 0x35ea2e85
- (int)groupingLevel;	// 0x35e17005
// converted property getter: - (BOOL)groupsByEvent;	// 0x35e1686d
- (BOOL)isRedoing;	// 0x35e16191
- (BOOL)isUndoRegistrationEnabled;	// 0x35ea310d
- (BOOL)isUndoing;	// 0x35e16179
// converted property getter: - (unsigned)levelsOfUndo;	// 0x35ea3179
- (id)prepareWithInvocationTarget:(id)invocationTarget;	// 0x35ea3865
- (void)redo;	// 0x35ea3589
- (BOOL)redoActionIsDiscardable;	// 0x35ea3b9d
- (id)redoActionName;	// 0x35ea3a59
- (id)redoMenuItemTitle;	// 0x35ea3c5d
- (id)redoMenuTitleForUndoActionName:(id)undoActionName;	// 0x35ea3d6d
- (void)registerUndoWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x35e161a9
- (void)removeAllActions;	// 0x35e14bfd
- (void)removeAllActionsWithTarget:(id)target;	// 0x35e17045
// converted property getter: - (id)runLoopModes;	// 0x35e1658d
- (void)setActionIsDiscardable:(BOOL)discardable;	// 0x35ea3a91
- (void)setActionName:(id)name;	// 0x35e16885
// converted property setter: - (void)setGroupsByEvent:(BOOL)event;	// 0x35ea3129
// converted property setter: - (void)setLevelsOfUndo:(unsigned)undo;	// 0x35ea3159
// converted property setter: - (void)setRunLoopModes:(id)modes;	// 0x35ea3199
- (void)undo;	// 0x35ea31fd
- (BOOL)undoActionIsDiscardable;	// 0x35ea3b79
- (id)undoActionName;	// 0x35ea3a21
- (id)undoMenuItemTitle;	// 0x35ea3bc1
- (id)undoMenuTitleForUndoActionName:(id)undoActionName;	// 0x35ea3d01
- (void)undoNestedGroup;	// 0x35ea3309
@end

