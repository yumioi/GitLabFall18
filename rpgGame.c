//Contributors
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

void sleep(unsigned int seconds);
void main(void)
{
    int x,y,z,i,h,g,k,choice=0;
    char name[256];
    int boxNum=0;

    printf("Please enter your name: "); //Input any number of array inputs
    scanf("%s",name);

    printf("Hello %s welcome to the rpgGame!\n",name);

    while(choice != 99)
    {
        puts("You find yourself in a dark room and you are not sure how you got here.");
        puts("As you look around you see the room has 25 doors, each labeled with a number. You are not sure how such a small room can have 25 doors, sooo magic...");
        puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        puts("What door do you choose?");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                {
                    while(choice != 99)
                    {
                        puts("You open the door and you quickly turn arround to find the door quickly disappearing behind you.");
                        puts("In front of you, you now notice a long hallway leading to a room that is completely white.");
                        puts("At this point you have two choices.");
                        puts("1. Walk down the dark hallway.");
                        puts("2. Scream in panic.");
                        scanf("%d", &choice);
                        if(choice == 1)
                        {
                            puts("You begin to wall down the dark hallway.");
                            puts("As you walk, you notice that the room is actually a lot brighter than you thought it was.");
                            puts("You now are inside the white room and it looks like a office cubicle.");
                            puts("In the far right corner you see a old computer");
                            sleep(4);
                            puts("[  675.362959] Kernel panic - not syncing: Watchdog detected hard LOCKUP on cpu 8");
                            puts("[  675.363355] Pid: 3457, comm: lve_tag_thread veid: 0 Not tainted 2.6.32-673.8.1.lve1.4.3.el6.x86_64 #1");
                            puts("[  675.363748] Call Trace:");
                            puts("[  675.363972]  <NMI>  [<ffffffff81546288>] ? panic+0xa7/0x16f");
                            puts("[  675.364284]  [<ffffffff81015039>] ? sched_clock+0x9/0x10");
                            puts("[  675.364520]  [<ffffffff81105fdd>] ? watchdog_overflow_callback+0xcd/0xd0");
                            puts("[  675.364757]  [<ffffffff8113ed17>] ? __perf_event_overflow+0xa7/0x240");
                            puts("[  675.364993]  [<ffffffff8101ee24>] ? x86_perf_event_set_period+0xf4/0x180");
                            puts("[  675.365230]  [<ffffffff8113f364>] ? perf_event_overflow+0x14/0x20");
                            puts("[  675.365464]  [<ffffffff81025bd2>] ? intel_pmu_handle_irq+0x202/0x3f0");
                            puts("[  675.365703]  [<ffffffff8154bd49>] ? perf_event_nmi_handler+0x39/0xb0");
                            puts("[  675.365937]  [<ffffffff8154d805>] ? notifier_call_chain+0x55/0x80");
                            puts("[  675.366171]  [<ffffffff8154d86a>] ? atomic_notifier_call_chain+0x1a/0x20");
                            puts("[  675.366408]  [<ffffffff810b239e>] ? notify_die+0x2e/0x30");
                            puts("[  675.366640]  [<ffffffff8154b30b>] ? do_nmi+0x1cb/0x370");
                            puts("[  675.366870]  [<ffffffff8154ad20>] ? nmi+0x20/0x30");
                            puts("[  675.367111]  [<ffffffff8154a58e>] ? _spin_lock+0x1e/0x30");
                            puts("[  675.367343]  <<EOE>>  <IRQ>  [<ffffffffa0283c7d>] ? tag_free_delayed+0x1d/0x60 [kmodlve]");
                            puts("[  675.367873]  [<ffffffffa0288c53>] ? lve_free_task_hook+0x73/0x110 [kmodlve]");
                            puts("[  675.368112]  [<ffffffff81084742>] ? delayed_put_task_struct+0x42/0x80");
                            puts("[  675.368349]  [<ffffffff8110c015>] ? __rcu_process_callbacks+0x135/0x350");
                            puts("[  675.368583]  [<ffffffff81015089>] ? read_tsc+0x9/0x10");
                            puts("[  675.368815]  [<ffffffff8110c25b>] ? rcu_process_callbacks+0x2b/0x50");
                            puts("[  675.369049]  [<ffffffff81087a2d>] ? __do_softirq+0x10d/0x250");
                            puts("[  675.369285]  [<ffffffff8100c4cc>] ? call_softirq+0x1c/0x30");
                            puts("[  675.369518]  [<ffffffff810102f5>] ? do_softirq+0x65/0xa0");
                            puts("[  675.369749]  [<ffffffff8108784d>] ? irq_exit+0xcd/0xd0");
                            puts("[  675.369981]  [<ffffffff8155139a>] ? smp_apic_timer_interrupt+0x4a/0x60");
                            puts("[  675.370216]  [<ffffffff8100bcd3>] ? apic_timer_interrupt+0x13/0x20");
                            puts("[  675.370448]  <EOI>  [<ffffffff8154a582>] ? _spin_lock+0x12/0x30");
                            puts("[  675.370750]  [<ffffffffa0283e08>] ? tag_list_handle+0x28/0xc0 [kmodlve]");
                            puts("[  675.370988]  [<ffffffffa0283ee2>] ? tag_list_handler+0x42/0xe0 [kmodlve]");
                            puts("[  675.371223]  [<ffffffff810ab910>] ? autoremove_wake_function+0x0/0x40");
                            puts("[  675.371460]  [<ffffffffa0283ea0>] ? tag_list_handler+0x0/0xe0 [kmodlve]");
                            puts("[  675.371694]  [<ffffffff810ab51e>] ? kthread+0x9e/0xc0");
                            puts("[  675.371926]  [<ffffffff8100c3ca>] ? child_rip+0xa/0x20");
                            puts("[  675.372158]  [<ffffffff810ab480>] ? kthread+0x0/0xc0");
                            puts("[  238.954555] [<8010ffd8>] (unwind_backtrace) from [<8010c240>] (show_stack+0x20/0x24)");
                            puts("[  238.962413] [<8010c240>] (show_stack) from [<807840a4>] (dump_stack+0xd4/0x118)");
                            puts("[  238.969832] [<807840a4>] (dump_stack) from [<8011dc34>] (panic+0xf0/0x274)");
                            puts("[  238.976805] [<8011dc34>] (panic) from [<801225c4>] (complete_and_exit+0x0/0x2c)");
                            puts("[  238.984218] [<801225c4>] (complete_and_exit) from [<8012265c>] (do_group_exit+0x4c/0xe4)");
                            puts("[  238.992426] [<8012265c>] (do_group_exit) from [<8012da40>] (get_signal+0x36c/0x6bc)");
                            puts("[  239.000195] [<8012da40>] (get_signal) from [<8010b2f4>] (do_signal+0xc4/0x3e4)");
                            puts("[  239.007522] [<8010b2f4>] (do_signal) from [<8010b7fc>] (do_work_pending+0xb8/0xd0)");
                            puts("[  239.015201] [<8010b7fc>] (do_work_pending) from [<80108094>] (slow_work_pending+0xc/0x20)");
                            puts("[  239.023497] CPU0: stopping");
                            puts("[  239.026239] CPU: 0 PID: 0 Comm: swapper/0 Tainted: G         C      4.14.34-v7+ #1110");
                            puts("[  239.034177] Hardware name: BCM2835");
                            puts("[  239.037626] [<8010ffd8>] (unwind_backtrace) from [<8010c240>] (show_stack+0x20/0x24)");
                            puts("[  239.045480] [<8010c240>] (show_stack) from [<807840a4>] (dump_stack+0xd4/0x118)");
                            puts("[  239.052895] [<807840a4>] (dump_stack) from [<8010e458>] (handle_IPI+0x2bc/0x33c)");
                            puts("[  239.060398] [<8010e458>] (handle_IPI) from [<801014d8>] (bcm2836_arm_irqchip_handle_irq+0x7c/0xac)");
                            puts("[  239.069490] [<801014d8>] (bcm2836_arm_irqchip_handle_irq) from [<8079fcbc>] (__irq_svc+0x5c/0x7c)");
                            puts("[  239.078486] Exception stack(0x80c01ef0 to 0x80c01f38)");
                            puts("[  239.083605] 1ee0:                                     00000000 00e7df50 397c4000 00000000");
                            puts("[  239.091899] 1f00: 80c00000 80c03dcc 80c03d68 80c88172 00000001 80b60a30 babffa00 80c01f4c");
                            puts("[  239.100192] 1f20: 80c04174 80c01f40 80108a4c 80108a50 60000013 ffffffff");
                            puts("[  239.106902] [<8079fcbc>] (__irq_svc) from [<80108a50>] (arch_cpu_idle+0x34/0x4c)");
                            puts("[  239.114405] [<80108a50>] (arch_cpu_idle) from [<8079f434>] (default_idle_call+0x34/0x48)");
                            puts("[  239.122613] [<8079f434>] (default_idle_call) from [<801611cc>] (do_idle+0xd8/0x150)");
                            puts("[  239.130379] [<801611cc>] (do_idle) from [<801614e0>] (cpu_startup_entry+0x28/0x2c)");
                            puts("[  239.138058] [<801614e0>] (cpu_startup_entry) from [<80799184>] (rest_init+0xbc/0xc0)");
                            puts("[  239.145915] [<80799184>] (rest_init) from [<80b00df8>] (start_kernel+0x3d4/0x3e0)");
                            puts("[  239.153503] CPU3: stopping");
                            puts("[  239.156245] CPU: 3 PID: 0 Comm: swapper/3 Tainted: G         C      4.14.34-v7+ #1110");
                            puts("[  239.164182] Hardware name: BCM2835");
                            puts("[  239.167631] [<8010ffd8>] (unwind_backtrace) from [<8010c240>] (show_stack+0x20/0x24)");
                            puts("[  239.175486] [<8010c240>] (show_stack) from [<807840a4>] (dump_stack+0xd4/0x118)");
                            puts("[  239.182901] [<807840a4>] (dump_stack) from [<8010e458>] (handle_IPI+0x2bc/0x33c)");
                            puts("[  239.190402] [<8010e458>] (handle_IPI) from [<801014d8>] (bcm2836_arm_irqchip_handle_irq+0x7c/0xac)");
                            puts("[  239.199492] [<801014d8>] (bcm2836_arm_irqchip_handle_irq) from [<8079fcbc>] (__irq_svc+0x5c/0x7c)");
                            puts("[  239.208487] Exception stack(0xb9d27f38 to 0xb9d27f80)");
                            puts("[  239.213606] 7f20:                                                       00000000 00062a7c");
                            puts("[  239.221900] 7f40: 397f7000 00000000 b9d26000 80c03dcc 80c03d68 80c88172 00000001 410fd034");
                            puts("[  239.230193] 7f60: 00000000 b9d27f94 80c04174 b9d27f88 80108a4c 80108a50 60000013 ffffffff");
                            puts("[  239.238490] [<8079fcbc>] (__irq_svc) from [<80108a50>] (arch_cpu_idle+0x34/0x4c)");
                            puts("[  239.245992] [<80108a50>] (arch_cpu_idle) from [<8079f434>] (default_idle_call+0x34/0x48)");
                            puts("[  239.254199] [<8079f434>] (default_idle_call) from [<801611cc>] (do_idle+0xd8/0x150)");
                            puts("[  239.261964] [<801611cc>] (do_idle) from [<801614e0>] (cpu_startup_entry+0x28/0x2c)");
                            puts("[  239.269641] [<801614e0>] (cpu_startup_entry) from [<8010df50>] (secondary_start_kernel+0x130/0x13c)");
                            puts("[  239.278819] [<8010df50>] (secondary_start_kernel) from [<0010196c>] (0x10196c)");
                            puts("[  239.286140] CPU1: stopping");
                            puts("[  239.288881] CPU: 1 PID: 0 Comm: swapper/1 Tainted: G         C      4.14.34-v7+ #1110");
                            puts("[  239.296819] Hardware name: BCM2835");
                            puts("[  239.300268] [<8010ffd8>] (unwind_backtrace) from [<8010c240>] (show_stack+0x20/0x24)");
                            puts("[  239.308122] [<8010c240>] (show_stack) from [<807840a4>] (dump_stack+0xd4/0x118)");
                            puts("[  239.315536] [<807840a4>] (dump_stack) from [<8010e458>] (handle_IPI+0x2bc/0x33c)");
                            puts("[  239.323038] [<8010e458>] (handle_IPI) from [<801014d8>] (bcm2836_arm_irqchip_handle_irq+0x7c/0xac)");
                            puts("[  239.332126] [<801014d8>] (bcm2836_arm_irqchip_handle_irq) from [<8079fcbc>] (__irq_svc+0x5c/0x7c)");
                            puts("[  239.341121] Exception stack(0xb9d23f38 to 0xb9d23f80)");
                            puts("[  239.346240] 3f20:                                                       00000000 007f534c");
                            puts("[  239.354533] 3f40: 397d5000 00000000 b9d22000 80c03dcc 80c03d68 80c88172 00000001 410fd034");
                            puts("[  239.362826] 3f60: 00000000 b9d23f94 80c04174 b9d23f88 80108a4c 80108a50 60000013 ffffffff");
                            puts("[  239.371122] [<8079fcbc>] (__irq_svc) from [<80108a50>] (arch_cpu_idle+0x34/0x4c)");
                            puts("[  239.378624] [<80108a50>] (arch_cpu_idle) from [<8079f434>] (default_idle_call+0x34/0x48)");
                            puts("[  239.386831] [<8079f434>] (default_idle_call) from [<801611cc>] (do_idle+0xd8/0x150)");
                            puts("[  239.394597] [<801611cc>] (do_idle) from [<801614e0>] (cpu_startup_entry+0x28/0x2c)");
                            puts("[  239.402273] [<801614e0>] (cpu_startup_entry) from [<8010df50>] (secondary_start_kernel+0x130/0x13c)");
                            puts("[  239.411448] [<8010df50>] (secondary_start_kernel) from [<0010196c>] (0x10196c)");
                            puts("[  239.418781] ---[ end Kernel panic - not syncing: Attempted to kill init! exitcode=0x0000000b");
                            sleep(4);
                            system("clear");
                            puts("they're watching.");
                            sleep(2);
                            puts("Press Control + c to exit.");
                            for( ;; )
                            {

                            }
                        }
                        else if(choice == 2)
                        {
                            puts("You then scream at the top of your lungs!");
                            puts("Surprisingly, nothing happens.");
                            puts("----------------------");
                            puts("Feelings of helplessness grow inside you.");
                            puts("----------------------");
                        }
                    }
                    break;
                }
            case 2:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 3:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 4:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 5:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 6:
                {
                    while(choice != 99)
                    {
                    }
                    break;
                }
            case 7:
                {
                    while(choice != 99)
                    {
                    }
                    break;
                }
            case 8:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 9:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 10:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 11:
                {
                    while(choice != 99)
                    {
                    }
                    break;
                }
            case 12:
                {
                    while(choice != 99)
                    {
                    }
                    break;
                }
            case 13:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 14:
                {
                    while(choice != 99)
                    {
                    }
                    break;
                }
            case 15:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 16:
                {
                    while(choice != 99)
                    {
                    }
                    break;
                }
            case 17:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 18:
                {
                    while(choice != 99)
                    {
                    }
                    break;
                }
            case 19:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 20:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 21:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 22:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 23:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 24:
                {
                    while(choice != 99)
                    {
                        puts("you open the door and find ........");
                        scanf("%d",&choice);
                    }
                    break;
                }
            case 25:
                {
                    while(choice != 99)
                    {
                        puts("You open the door and close it behind you.");
                        puts("After you overcome the panic from almost drowning, you look around and You find yourself in a cave, the air is damp and you smell mold.");
                        puts("You notice a skeleton at your feet with it's right hand clenched around something. The cave ahead leads to a tunnel and you see a door to your right.");
                        puts("At this point you have 3 choices:");
                        puts("1. Examine the skeleton.");
                        puts("2. Proceed further ahead in the cave.");
                        puts("3. Enter the door to your right.");
                        scanf("%d",&choice);
                        if(choice == 1)
                        {
                            puts("You reach down and pry open the skeleton's hand, a finger breaks loose and you place it in your pocket. Once you pry the opject free you look at it closely in the light and see it is a live grenade and the pin springs free. You drop the grenade and dash through the cave. You can hear the grenade explode, collapsing the tunnel behind you.");
                            puts("To be continued...");
                            break;
                        }
                        else if(choice == 2)
                        {
                            puts("You find yourself further ahead in the cave.");
                            puts("To be continued....");
                            break;
                        }
                        else if(choice == 3)
                        {
                            puts("You enter the and close the door behind you.");
                            printf("You hear an loud voice \" %s why do you disturb me? \" \n",name);
                            puts("To be continued....");
                            break;
                        }
                        else
                        {
                            puts("wrong choice");
                        }
                    }
                    break;
                }
        }
    }
}

