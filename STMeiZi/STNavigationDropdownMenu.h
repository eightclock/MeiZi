//
//  STNavigationDropdownMenu.h
//  STMeiZi
//
//  Created by class on 24/08/2017.
//  Copyright © 2017 八点钟学院. All rights reserved.
//

#import <UIKit/UIKit.h>


@class STNavigationDropdownMenu;

@protocol STNavigationDropdownMenuDataSource <NSObject>

@required
-(NSArray<NSString *> *)titleArrayForNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu;

@optional
- (UIFont *)titleFontForNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu;
- (UIColor *)titleColorForNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu;
- (UIImage *)arrowImageForNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu;
- (CGFloat)arrowPaddingForNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu;
- (NSTimeInterval)animationDurationForNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu;
- (BOOL)keepCellSelectionForNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu;
- (CGFloat) cellHeightForNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu;
- (UIEdgeInsets )cellSeparatorInsetsForNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu;
- (NSTextAlignment)cellTextAlignmentForNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu;
- (UIFont *)cellTextFontForNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu;
- (UIColor *)cellTextColorForNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu;
- (UIColor *)cellBackgroundColorforNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu;
- (UIColor *)cellSelectedColorForNavigationDropdownMenu:(STNavigationDropdownMenu *)naviagationDropdownMenu;

@end

@protocol STNavigationDropdownMenuDelegate <NSObject>

@required
- (void)navigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu didSelectedAtIndex:(NSUInteger)index;

@end

@interface STNavigationDropdownMenu : UIButton

@property(nonatomic,weak) id <STNavigationDropdownMenuDataSource> dataSource;
@property(nonatomic,weak) id <STNavigationDropdownMenuDelegate> delegate;

- (instancetype)initWithNavigationController:(UINavigationController *)navigationController;

- (void)show;
- (void)hide;

@end
