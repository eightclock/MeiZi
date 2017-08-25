//
//  ViewController.m
//  STMeiZi
//
//  Created by class on 18/08/2017.
//  Copyright © 2017 八点钟学院. All rights reserved.
//

#import "ViewController.h"
#import "STNavigationDropdownMenu.h"

@interface ViewController ()<STNavigationDropdownMenuDataSource,STNavigationDropdownMenuDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


#pragma mark - SYNavigationDropdownMenuDataSource
- (NSArray<NSString *> *)titleArrayForNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu{
    
    return @[@"测试1",@"测试2",@"测试2",@"测试2",@"测试2",@"测试2",@"测试2"];
}

- (UIImage *)arrowImageForNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu{
    return [UIImage imageNamed:@"Arrow"];
}

- (CGFloat)arrowPaddingForNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu{
    return 8.f;
}
- (BOOL)keepCellSelectionForNavigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu{
    return NO;
}

#pragma mark - STNavigationDropdownMenuDelegate
- (void)navigationDropdownMenu:(STNavigationDropdownMenu *)navigationDropdownMenu didSelectedAtIndex:(NSUInteger)index{
    
}

#pragma mark - Getting Method

- (UINavigationItem *)navigationItem{
    
    UINavigationItem *navItem = [super navigationItem];
    
    if(!navItem.titleView){
        
        STNavigationDropdownMenu *navDropdownMenu = [[STNavigationDropdownMenu alloc] initWithNavigationController:self.navigationController];
        navDropdownMenu.delegate = self;
        navDropdownMenu.dataSource = self;
        navItem.titleView = navDropdownMenu;
    }
    
    return navItem;
}

@end
