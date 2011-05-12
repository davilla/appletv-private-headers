/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"
#import "UIScrollViewDelegate.h"


@protocol UITableViewDelegate <NSObject, UIScrollViewDelegate>
@optional
- (void)tableView:(id)view accessoryButtonTappedForRowWithIndexPath:(id)indexPath;
- (int)tableView:(id)view accessoryTypeForRowWithIndexPath:(id)indexPath;
- (void)tableView:(id)view didDeselectRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
- (float)tableView:(id)view heightForFooterInSection:(int)section;
- (float)tableView:(id)view heightForHeaderInSection:(int)section;
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
- (int)tableView:(id)view indentationLevelForRowAtIndexPath:(id)indexPath;
- (BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view targetIndexPathForMoveFromRowAtIndexPath:(id)indexPath toProposedIndexPath:(id)proposedIndexPath;
- (id)tableView:(id)view titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view viewForFooterInSection:(int)section;
- (id)tableView:(id)view viewForHeaderInSection:(int)section;
- (void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view willDeselectRowAtIndexPath:(id)indexPath;
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
@end

