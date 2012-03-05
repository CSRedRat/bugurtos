/**************************************************************************
    BuguRTOS-0.3.x(Bugurt real time operating system)
    Copyright (C) 2011  anonimous

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

    Please contact with me by E-mail: shkolnick.kun@gmail.com

    A special exception to the GPL can be applied should you wish to distribute
    a combined work that includes BuguRTOS, without being obliged to provide
    the source code for any proprietary components. See the file exception.txt
    for full details of how and when the exception can be applied.
**************************************************************************/

/*****************************************************************************************
```````````````````````````````..:+oyhdmNNMMMMMMNmmdhyo+:..```````````````````````````````
``````````````````````````.:oydNMMMMMMMMMNNNNNNNNMMMMMMMMMNdy+:.``````````````````````````
```````````````````````:sdNMMMMMNdys+/::----------::/osydNMMMMMNds:```````````````````````
```````````````````.+hNMMMMmho/-..........................-/shmMMMMNh/.```````````````````
````````````````./hNMMMNho:...................................-:ohNMMMNh/`````````````````
``````````````.smMMMNy/-.......:////ss++/+-.......................-+yNMMMmo.``````````````
````````````-sNMMMd+-.....:////:-...-/s::..............+o/-..........-odMMMNs.````````````
``````````.sNMMNh/....................................-o:--............./hMMMNo.``````````
`````````+mMMMh:-........................................-...............-/dMMMm/`````````
```````.yMMMm/...................-::--..................:-........--........+mMMMy.```````
``````:mMMMy-.......................-::-...............-:.........-::........-yMMMd:``````
`````/NMMN+-..................::-.....-:-............../--.........-:/-.......-+NMMN:`````
````+NMMm::o/-..--/+o+o+++++o+osys+//::-::.............:/....-:-::-..-++-.......:NMMN/````
```/NMMm:.-++-+yhs/-``       `dMMMMMmho+:-..............:-/+yho/:/+oyo//o-......./mMMN:```
``-NMMm/....-/--::/o+o+oo+oo++oosyss+smyo/.............:yyho-`     smMMddh-......./NMMN.``
`.hMMM/......-++:-.-:oooooooooosyyhhys/...............-+osyyyyysssssooo+ohhs-......+MMMh.`
`+MMMy.......-::/++:-.....-:/++++o+o/--................--/oooo+o++o+++////-y/.......hMMM/`
.mMMN:.........--:---...-::/+//::--.......................--//+//-...-.....+/......./NMMd`
/MMMy............-::----------....----/+-.....................-++/:---....-o-........hMMN:
yMMM/.............--:://///oo+++/+++oo+-.......................-://+/:--::::.........+MMMs
mMMN:................----:/h:::/:/::---.........................--/osss+++:..........:NMMd
MMMd-....................:mNs:-....................................--:odo:-..........:mMMN
MMMd-....................yoshyoso:--................................../mm/...........:mMMM
MMMm:..................../-o/h.y-:+dooo+/:--....................-/osydddmh...........:mMMN
mMMN:........................+mNs `h.  -d/:/+h++ooooy+++s++y+++mo+y` yh.do...........:NMMh
sMMM+........................-hmMo/ds  oMo`.-o     :h   s:`h` `Nysd.-Ny-h:...........+MMMo
/MMMh........................./smMMMMd+NMMNNMh`    sN: .mNNMddNMMMMNmN+..............hMMN:
.dMMN/........................./+hMMMMMMMMMMMMmhyyyNMNNMMMMMMMMMMMNsoo-............./NMMd`
`+MMMh.........................-/+omMMMMMMMMMMMMMMMMMMMMMMMMMMMMms-/+...............hMMM/`
`.hMMM+..........................:/-omMMMMMMMMMMMMMMMdmMdhMMMds/-..-...............oMMMy``
``.NMMN/............................--/hNN/h.`ys:dmsd:-syos+--+.................../NMMN.``
```/NMMm:...........................:+/--:+s++oo+osoo+/:-..-/+::-................/mMMN:```
````/NMMN:............................-/++/:-..........-//+/-..:+.--............/NMMN/````
`````:NMMN+-.............../+-.............-://////////:-.......+s+::.........-oNMMN:`````
``````:mMMMy-..............:/o-.................................:yo//........-hMMMd-``````
```````.yMMMm+.............:o:++-...............................+y+o-......-+mMMMs.```````
`````````/mMMMd/-...........-++:+/-.---........................-ho+/.....-/dMMMm/`````````
``````````.oNMMMh/............-++:++/////:....................-yo:o-...-+hMMMNo.``````````
````````````.sNMMMdo-...........-++::++:-:/+//:..............:o:/o-..-omMMMNo.````````````
``````````````.omMMMNy+-..........-/+-.:/+/:--:+++/++//:/::/+/-+/.-+hMMMMmo```````````````
`````````````````/hNMMMNho:-...............-:/:-....--::::--..-/ohNMMMNy:`````````````````
```````````````````./hNMMMMmhs/-..........................-/shNMMMMNy/.```````````````````
```````````````````````:sdNMMMMMNdhso+/:----------:/+oshdNMMMMMNho:```````````````````````
``````````````````````````.:+ydNMMMMMMMMMMNNNNNNMMMMMMMMMMmds+:```````````````````````````
````````````````````````````````.:/osyhdmNNMMMMNNmdhyso/:.````````````````````````````````
******************************************************************************************
*                                                                                        *
*                   This logo was graciously delivered by 10003-kun ITT:                 *
*                                                                                        *
*                           http://www.0chan.ru/r/res/9996.html                          *
*                                                                                        *
*****************************************************************************************/
#ifndef _PROC_H_
#define _PROC_H_
/*!
\file
\brief Заголовок процессов.
*/
//Процесс
typedef struct _proc_t proc_t;
// Свойства
/*!
\brief Процесс.

В разных ОС это называется по разному: процесс, поток, задача и пр., суть такова: это независимый поток исполнения инструкций процессора.

То есть это исполняющийся кусок твоей программы, у которого есть своя собственная «main» (смотри поле pmain), и эта «main» может быть написана так, как будто других процессов нет!

Можно использовать 1 функцию pmain для нескольких процессов, каждый запущенный экземпляр pmain не зависит от других, но есть одно но.
\warning Осторожно со статическими переменными, они будут общими для всех запущенных экземпляров,  доступ к ним необходимо организовывать только с помощью средств синхронизации процессов.
*/
struct _proc_t
{
    gitem_t parent;     /*!< Родитель - gitem. */
    flag_t flags;       /*!< Флаги (для ускорения анализа состояния процесса). */
#ifdef CONFIG_USE_HIGHEST_LOCKER
    prio_t base_prio;     /*!< Базовый приоритет. */
    pcounter_t lres;     /*!< Счетчик захваченных ресурсов. */
#else
    count_t lres;       /*!< Счетчик захваченных ресурсов. */
#endif
    timer_t time_quant; /*!< Квант времени процесса. */
    timer_t timer;      /*!< Таймер процесса, для процессов жесткого реального времени используется как watchdog. */

#ifdef CONFIG_MP
    // Поля, специфичные для многопроцессорных систем;
    core_id_t core_id;      /*!< Идентификатор процессора, на котором исполняется процесс. */
    affinity_t affinity;    /*!< Аффинность (индекс процессоров, на котором может исполняться процесс). */
    lock_t lock;            /*!< Спин блокировка процесса. */
#endif

    code_t pmain;       /*!< Главная функция процесса. */
    code_t sv_hook;     /*!< Хук, исполняется планировщиком после сохранения контекста процесса. */
    code_t rs_hook;     /*!< Хук, исполняется планировщиком перед восстановлением контекста процесса. */
    void * arg;         /*!< Аргумент для pmain, sv_hook, rs_hook, может хранить ссылку на локальные данные конкретного экземпляра процесса. */

    void * ipc;         /*!< Указатель на хранилище для передачи данных через IPC */

    stack_t * sstart;   /*!< Указатель на дно стека экземпляра процесса. */
    stack_t * spointer; /*!< Указатель на вершину стека экземпляра процесса. */
};
/*
Порядок захвата блокировок:
1) при постановке процесса в список: 1-блокировка процесса, 2-блокировка списка
2) при удалении процесса из списка, без изменения полей кроме parent: блокировка списка
3) при удалении процесса из списка, с изменениями полей кроме parent: 1-блокировка процесса, 2-блокировка списка
*/
// Флаги
/*!
\brief Флаг реального времени.

Для этого процесса используется политика планирования жесткого реального времени.
*/
#define PROC_FLG_RT         ((flag_t)1)
/*!
\brief Флаг запущен.

Процесс исполняется или готов к исполнению.
*/
#define PROC_FLG_RUN        ((flag_t)2)
/*!
\brief Флаг захвата ресурсов.

Процесс удерживает общий ресурс.
*/
#define PROC_FLG_HOLD       ((flag_t)4)
/*!
\brief Флаг постановки в список ожидания захвата общего ресурса.

Процесс стоит в списке ожидающих захвата общего ресурса.
*/
#define PROC_FLG_QUEUE      ((flag_t)8)
/*!
\brief Флаг постановки в список ожидания сигнала.

Процесс стоит в списке ожидающих сигнал.
*/
#define PROC_FLG_WAIT       ((flag_t)16)
/*!
\brief Флаг запроса останова.

Произошел запрос на останов процесса. Процесс будет остановлен при первой же возможности.
*/
#define PROC_FLG_PRE_END    ((flag_t)32)
/*!
\brief Окончания работы.

Процесс завершился - произошел возврат из pmain.
*/
#define PROC_FLG_END        ((flag_t)64)
/*!
\brief Флаг "мертвого" процесса.

Процесс выполнил недопустимую операцию и был "убит", раньше надо было думать.
*/
#define PROC_FLG_DEAD       ((flag_t)128)
/*!
\brief Флаг ожидания передачи указателя через IPC.
*/
#define PROC_FLG_IPCW_P     ((flag_t)256)
/*!
\brief Флаг ожидания передачи данных через IPC.
*/
#define PROC_FLG_IPCW_D     ((flag_t)512)
/*!
\brief Флаг останова по watch_dog.
*/
#define PROC_FLG_WD_STOP    ((flag_t)1024)

// Методы
/*!
\brief Инициализация процесса из обработчика прерывания, либо из критической секции.
*/
void proc_init_isr(
    proc_t * proc, /*!<Указатель на инициируемый процесс.*/
    code_t pmain,  /*!<Указатель на главную функцию процесса.*/
    code_t sv_hook, /*!<Указатель на хук proc->sv_hook.*/
    code_t rs_hook, /*!<Указатель на хук proc->rs_hook.*/
    void * arg, /*!<Указатель на аргумент.*/
    stack_t *sstart, /*!<Указатель на дно стека процесса.*/
    prio_t prio, /*!<Приоритет.*/
    timer_t time_quant,/*!<Квант времени.*/
    bool_t is_rt /*!Флаг реального времени, если true, значит процесс будет иметь поведение RT.*/
#ifdef CONFIG_MP
    ,affinity_t affinity /*!<Афинность.*/
#endif // CONFIG_MP
);
/*!
\brief Инициализация процесса.
*/
void proc_init(
    proc_t * proc, /*!<Указатель на инициируемый процесс.*/
    code_t pmain, /*!<Указатель на главную функцию процесса.*/
    code_t sv_hook, /*!<Указатель на хук proc->sv_hook.*/
    code_t rs_hook, /*!<Указатель на хук proc->rs_hook.*/
    void * arg,  /*!<Указатель на аргумент.*/
    stack_t *sstart, /*!<Указатель на дно стека процесса.*/
    prio_t prio, /*!<Приоритет.*/
    timer_t time_quant, /*!<Квант времени.*/
    bool_t is_rt /*!Флаг реального времени, если true, значит процесс будет иметь поведение RT.*/
#ifdef CONFIG_MP
    ,affinity_t affinity /*!<Афинность.*/
#endif // CONFIG_MP
);
/*!
\brief Обертка для запуска процессов.

Эта функция  вызывает proc->pmain(proc->arg), и если происходит возврат из pmain, то proc_run_wrapper корректно завершает процесс.
\param proc - Указатель на запускаемый процесс.
*/
void proc_run_wrapper(proc_t * proc);
/*!
\brief Завершение работы процесса после возврата из proc->pmain. Для внутреннего использования.

\param proc - Указатель на запускаемый процесс.
*/
void _proc_terminate(proc_t * proc);
/*!
\brief Запуск процесса.

Ставит процесс в список готовых к выполнению, если можно (процесс не запущен, еще не завершил работу, не был "убит"), и производит перепланировку.
\param proc - Указатель на запускаемый процесс.
\return 1 - если процесс был вставлен в список готовых к выполнению, 0 во всех остальных случаях.
*/
bool_t proc_run(proc_t * proc);
/*!
\brief Запуск процесса из критической секции, либо обработчика прерывания.

Ставит процесс в список готовых к выполнению, если можно (процесс не запущен, еще не завершил работу, не был "убит"), и производит перепланировку.
\param proc - Указатель на запускаемый процесс.
\return 1 - если процесс был вставлен в список готовых к выполнению, 0 во всех остальных случаях.
*/
bool_t proc_run_isr(proc_t * proc);

/*!
\brief Перезапуск процесса.

Если можно (процесс не запущен, завершил работу, не был "убит"), приводит структуру proc в состояние, которое было после вызова proc_init, и ставит процесс в список готовых к выполнению, и производит перепланировку.
\param proc - Указатель на запускаемый процесс.
\return 1 - если процесс был вставлен в список готовых к выполнению, 0 во всех остальных случаях.
*/
bool_t proc_restart(proc_t * proc);
/*!
\brief Перезапуск процесса из критической секции или обработчика прерывания.

Если можно (процесс не запущен, завершил работу, не был "убит"), приводит структуру proc в состояние, которое было после вызова proc_init, и ставит процесс в список готовых к выполнению, производит перепланировку.
\param proc - Указатель на запускаемый процесс.
\return 1 - если процесс был вставлен в список готовых к выполнению, 0 во всех остальных случаях.
*/
bool_t proc_restart_isr(proc_t * proc);
/*!
\brief Останов процесса.

Вырезает процесс из списка готовых к выполнению и производит перепланировку.
\param proc - Указатель на запускаемый процесс.
\return 1 - если процесс был вставлен в список готовых к выполнению, 0 во всех остальных случаях.
*/
bool_t proc_stop(proc_t * proc);
/*!
\brief Останов процесса из критической секции или обработчика прерывания.

Вырезает процесс из списка готовых к выполнению и производит перепланировку.
\param proc - Указатель на запускаемый процесс.
\return 1 - если процесс был вставлен в список готовых к выполнению, 0 во всех остальных случаях.
*/
bool_t proc_stop_isr(proc_t * proc);
/*!
\brief Самоостанов процесса.

Вырезает вызывающий процесс из списка готовых к выполнению и производит перепланировку.
*/
void proc_self_stop(void);
/*!
\brief Сброс watchdog для процесса реального времени.

Если функцию вызывает процесс реального времени, то функция сбрасывает его таймер.
Если процесс завис, и таймер не был вовремя сброшен, то планировщик остановит такой процесс и передаст управление другому.
*/
void proc_reset_watchdog(void);
/*!
\brief Сброс watchdog для процесса реального времени из обработчика прерывания (для внутреннего использования).

Если функцию вызывает процесс реального времени, то функция сбрасывает его таймер.
Если процесс завис, и таймер не был вовремя сброшен, то планировщик остановит такой процесс и передаст управление другому.
*/
void _proc_reset_watchdog(void);

//  Функция для внутреннего использования - собственно запуск процесса
#ifdef CONFIG_MP
/*!
\brief Вставка процесса в список готовых к выполнению, для внутреннего использования.
*/
void _proc_run_( proc_t * proc );
#else
/*!
\brief Вставка процесса в список готовых к выполнению, для внутреннего использования.
*/
#define _proc_run_(proc) gitem_insert( (gitem_t *)proc, kernel.sched.ready )
#endif
/*!
\brief "Низкоуровневый" запуск процесса, для внутреннего использования.
*/
void _proc_run( proc_t * proc );

#ifdef CONFIG_MP
/*!
\brief Вырезка процесса из списка готовых к выполнению с обновлением статистики, для внутреннего использования.
*/
void _proc_stop_(proc_t * proc);
#else
/*!
\brief Вырезка процесса из списка готовых к выполнению, для внутреннего использования.
*/
#define _proc_stop_(proc) gitem_cut((gitem_t *)proc)
#endif
/*!
\brief "Низкоуровневый" останов процесса, для внутреннего использования.
*/
void _proc_stop(proc_t * proc);

/*!
\brief Останов процесса по флагу PROC_FLG_PRE_END из критической секции или обработчика прерывания, для внутреннего использования.
*/
void _proc_flag_stop( flag_t mask );
/*!
\brief Останов процесса по флагу PROC_FLG_PRE_END.
*/
void proc_flag_stop( flag_t mask );
// Упраление счетчиком захваченных ресурсов, для внутреннего использования
/*!
\brief Инкремент счетчика захваченных ресурсов, для внутреннего использования.
*/
void _proc_lres_inc(
    proc_t * proc /*!< Указатель на процесс, захвативший ресурс. */
#ifdef CONFIG_USE_HIGHEST_LOCKER
    ,prio_t prio /*!< Приоритет захваченного ресурса, используется совместно с опцией CONFIG_USE_HIGHEST_LOCKER. */
#endif
);
/*!
\brief Декремент счетчика захваченных ресурсов, для внутреннего использования.
*/
void _proc_lres_dec(
    proc_t * proc /*!< Указатель на процесс, захвативший ресурс. */
#ifdef CONFIG_USE_HIGHEST_LOCKER
    ,prio_t prio /*!< Приоритет захваченного ресурса, используется совместно с опцией CONFIG_USE_HIGHEST_LOCKER. */
#endif
);
#ifdef CONFIG_USE_HIGHEST_LOCKER
/*!
\brief Управление приоритетом процесса, для внутреннего использования.

Используется совместно с опцией CONFIG_USE_HIGHEST_LOCKER. Процесс должен быть остановлен на момент вызова.
\param proc - Указатель на процесс.
*/
void _proc_prio_control_stoped( proc_t * proc );
/*!
\brief Управление приоритетом процесса, для внутреннего использования.

Используется совместно с опцией CONFIG_USE_HIGHEST_LOCKER. Процесс должен быть запущен на момент вызова.
\param proc - Указатель на процесс.
*/
void _proc_prio_control_running( proc_t * proc );
#endif

#if defined(CONFIG_MP) && (!defined(CONFIG_USE_ALB))
/************************************
  "Ленивые" балансировщики нагрузки

,предназначены для запуска из тел
процессов, если не используется
активная схема балансировки нагрузки.

Можно использовать только один,
или оба в различных комбинациях

************************************/
/*!
\brief Ленивая балансировка нагрузки, для внутренненго использования.

Переносит 1 процесс на самое не нагруженное процессорное ядро в системе.
\param object_core - процессорное ядро, с которого будем снимать нагрузку.
*/
void _proc_lazy_load_balancer(core_id_t object_core);
/*!
\brief Ленивая балансировка нагрузки, для внутреннего использования.

Ищет самое нагруженное процессорное ядро в системе и переносит с него один процесс на самое ненагруженное ядро в системе.
*/
void _proc_global_lazy_load_balancer(void);

/*!
\brief Ленивая балансировка нагрузки, локальный балансировщик.

Переносит 1 процесс с ядра, на котором выполняется на самое не нагруженное процессорное ядро в системе.
*/
void proc_lazy_local_load_balancer(void);
/*!
\brief Ленивая балансировка нагрузки, глобальный балансировщик.

Ищет самое нагруженное процессорное ядро в системе и переносит с него один процесс на самое ненагруженное ядро в системе.
*/
void proc_lazy_global_load_balancer(void);

#endif // CONFIG_MP CONFIG_USE_ALB

#endif // _PROC_H_
